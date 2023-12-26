// SonarSensor.cpp
#include "SonarSensor.h"
#include "NAORobotAPI.h" // Include the actual header for NAORobotAPI

SonarSensor::SonarSensor(NAORobotAPI* _robotAPI) : robotAPI(_robotAPI) {
    // Initialize ranges to some default values
    ranges[0] = 0.0;
    ranges[1] = 0.0;
}

double SonarSensor::getRange(int index) const {
    // Check if the index is within bounds
    if (index >= 0 && index < 2) {
        return ranges[index];
    }
    else {
        // Handle out-of-bounds access
        // You might want to throw an exception or return a default value
        return 0.0;
    }
}

double SonarSensor::getMax(int& index) const {
    // Find the maximum range and update the index
    index = (ranges[0] > ranges[1]) ? 0 : 1;
    return ranges[index];
}

double SonarSensor::getMin(int& index) const {
    // Find the minimum range and update the index
    index = (ranges[0] < ranges[1]) ? 0 : 1;
    return ranges[index];
}

void SonarSensor::updateSensor(double ranges[]) {
    // Call the getSonarRange function from NAORobotAPI to update the ranges array
    double left, right;
    robotAPI->getSonaraRange(left, right);
    ranges[0] = left;
    ranges[1] = right;

}

double SonarSensor::operator[](int index) const {
    // Use the getRange function for subscript operator
    return getRange(index);
}
