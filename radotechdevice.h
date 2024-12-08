// radotechdevice.h
#ifndef RADOTECHDEVICE_H
#define RADOTECHDEVICE_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QPainterPath>

class RaDoTechDevice : public QWidget
{
    Q_OBJECT

public:
    explicit RaDoTechDevice(QWidget *parent = nullptr);
    QPoint getSensorPosition() const;
    void setBatteryLevel(int level);
    int getBatteryLevel();


protected:
    void paintEvent(QPaintEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

private:
    QPoint m_dragPosition;
    int battery_level;

signals:
    void sensorMoved(QPoint sensorPos);
    void updateBattery(int battery);
};

#endif // RADOTECHDEVICE_H
