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
    for (int i = 0; i < 4; ++i) {
        states[i] = newStates[i];
    }
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
