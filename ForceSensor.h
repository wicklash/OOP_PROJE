#ifndef FORCESENSOR_H
#define FORCESENSOR_H

#include "NaoRobotAPI.h"

class ForceSensor {
private:
    double force;
    NaoRobotAPI* robotAPI;

public:
    // Kurucu fonksiyon
    ForceSensor(NaoRobotAPI* api);

    // Sensörü günceller
    void updateSensor(double force);

    // Sensörden kuvvet deðerini alýr
    double getForce();

    // Robotun düþüp düþmediðini kontrol eder
    bool checkFall();
};

#endif // !FORCESENSOR_H
