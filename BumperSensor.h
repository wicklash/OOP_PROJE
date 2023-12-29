#ifndef BUMPERSSENSOR_H
#define BUMPERSSENSOR_H

#include "NaoRobotAPI.h"

class BumperSensor {
private:
    double states[4]; 
    NaoRobotAPI* robotAPI; 

public:
 
    BumperSensor(NaoRobotAPI* api);

    void updateSensor();

    bool getState(int index);

    bool checkTouch();
};

#endif // !BUMPERSSENSOR_H

