#include "BumperSensor.h"

// Constructor
BumperSensor::BumperSensor(NaoRobotAPI* api) {
    robotAPI = api;
    // Initialize states to false
    for (int i = 0; i < 4; ++i) {
        states[i] = false;
    }
}

// Update sensor states with the given array
void BumperSensor::updateSensor(bool newStates[]) {
    bool leftFoot_left, leftFoot_right, rightFoot_left, rightFoot_right;
    robotAPI->getFootBumpers(leftFoot_left, leftFoot_right, rightFoot_left, rightFoot_right);
    newStates[0] = leftFoot_left;
    newStates[1] = leftFoot_right;
    newStates[2] = rightFoot_left;
    newStates[3] = rightFoot_right;
   
}

// Get the state of the sensor at the specified index
bool BumperSensor::getState(int index) {
    if (index >= 0 && index < 4) {
        return states[index];
    }
    else {
        // Handle invalid index, returning false
        return false;
    }
}

// Check if any of the sensors is touched
bool BumperSensor::checkTouch() {
    for (int i = 0; i < 4; ++i) {
        if (states[i]) {
            return true;
        }
    }
    return false;
}
