// SonarSensor.cpp
#include "SonarSensor.h"
#include "NaoRobotAPI.h" // Include the actual header for NaoRobotAPI

SonarSensor::SonarSensor(NaoRobotAPI* _robotAPI) : robotAPI(_robotAPI) {
    ranges[0] = 0.0;
    ranges[1] = 0.0;
}

double SonarSensor::getRange(int index) const {
    if (index >= 0 && index < 2) {
        return ranges[index];
    }
    else {
        return 0.0; // Handle out-of-bounds access
    }
}

double SonarSensor::getMax(int& index) const {
    index = (ranges[0] > ranges[1]) ? 0 : 1;
    return ranges[index];
}

double SonarSensor::getMin(int& index) const {
    index = (ranges[0] < ranges[1]) ? 0 : 1;
    return ranges[index];
}

void SonarSensor::updateSensor(double newRanges[]) {
    double left, right;
    robotAPI->getSonarRange(left, right);
    ranges[0] = left;
    ranges[1] = right;
}

double SonarSensor::operator[](int index) const {
    // Directly access the ranges array without using getRange
    if (index >= 0 && index < 2) {
        return ranges[index];
    }
    else {
        return 0.0; // Handle out-of-bounds access
    }
}
