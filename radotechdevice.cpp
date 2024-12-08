// radotechdevice.cpp (Matthew)
#include "radotechdevice.h"
#include "QDebug"

RaDoTechDevice::RaDoTechDevice(QWidget *parent) : QWidget(parent)
{
    setFixedSize(120, 30);  // Set fixed size for the device
    setMouseTracking(true); // Enable mouse tracking
    battery_level =100;
}

QPoint RaDoTechDevice::getSensorPosition() const
{
    QPoint point = mapToParent(QPoint(10, height()/2));
    qDebug() << "Sensor Point:" << point;
    return point;
}

void RaDoTechDevice::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    // Draw device body with gradient
    QLinearGradient gradient(0, 0, 0, height());
    gradient.setColorAt(0, QColor(220, 220, 220));
    gradient.setColorAt(0.5, QColor(192, 192, 192));
    gradient.setColorAt(1, QColor(220, 220, 220));

    // Create rounded rectangle
    QPainterPath path;
    path.addRoundedRect(rect(), 15, 15);

    painter.setBrush(gradient);
    painter.setPen(QPen(Qt::gray, 1));
    painter.drawPath(path);

    // Draw "RaDoTech" text
    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 10, QFont::Bold));
    painter.drawText(rect(), Qt::AlignCenter, "RaDoTech");

    // Draw sensor point (blue dot)
    painter.setBrush(Qt::blue);
    painter.setPen(Qt::black);
    painter.drawEllipse(QPoint(10, height()/2), 4, 4);
}

void RaDoTechDevice::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_dragPosition = event->pos();
        event->accept();
    }
}

void RaDoTechDevice::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton) {
        QPoint delta = event->pos() - m_dragPosition;
        move(pos() + delta);
        emit sensorMoved(getSensorPosition());
        event->accept();
    }
}

void RaDoTechDevice::setBatteryLevel(int level)
{
    battery_level = level;
    emit updateBattery(battery_level);
}

int RaDoTechDevice::getBatteryLevel()
{
    return battery_level;
}
