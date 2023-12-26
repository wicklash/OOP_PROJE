// SonarSensor.h
#ifndef SONAR_SENSOR_H
#define SONAR_SENSOR_H


class SonarSensor {
private:
    double ranges[2];
    NaoRobotAPI* robotAPI;

public:
    SonarSensor(NaoRobotAPI* _robotAPI);

    double getRange(int index) const;
    double getMax(int& index) const;
    double getMin(int& index) const;
    void updateSensor( double newRanges[]); 

    double operator[](int index) const;
};

#endif // SONAR_SENSOR_H
