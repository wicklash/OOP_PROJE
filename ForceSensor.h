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

    // Sens�r� g�nceller
    void updateSensor(double force);

    // Sens�rden kuvvet de�erini al�r
    double getForce();

    // Robotun d���p d��medi�ini kontrol eder
    bool checkFall();
};

#endif // !FORCESENSOR_H
