#ifndef BUMPERSSENSOR_H
#define BUMPERSSENSOR_H

#include "NaoRobotAPI.h"

class BumperSensor {
private:
    double states[4]; // States of the bumper sensors
    NaoRobotAPI* robotAPI; // Pointer to the NaoRobotAPI object

public:
    // Constructor
    BumperSensor(NaoRobotAPI* api);

    // Update sensor states with the given array
    void updateSensor(bool states[]);

    // Get the state of the sensor at the specified index
    bool getState(int index);

    // Check if any of the sensors is touched
    bool checkTouch();
};

#endif // !BUMPERSSENSOR_H

