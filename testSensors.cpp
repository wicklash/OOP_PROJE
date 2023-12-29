//#include <iostream>
//#include "SonarSensor.h"
//#include "BumperSensor.h"
//#include "ForceSensor.h"
//#include "RobotControl.h"
//
//using namespace std;
//int main() {
//    // Create a real NaoRobotAPI instance
//    NaoRobotAPI realApi;
//    RobotControl robot;
//    
//
//    robot.connectRobot();
//    robot.forward();
//    Sleep(10000);
//    robot.stop();
//
//    SonarSensor sonarSensor(&realApi);
//    sonarSensor.updateSensor();
//    cout << sonarSensor.getRange(0) << endl;
//
//
//    BumperSensor bumperSensor(&realApi);
//    bumperSensor.updateSensor();
//    cout << bumperSensor.checkTouch() << endl; 
//
//
//    ForceSensor forceSensor(&realApi);
//    forceSensor.updateSensor();
//    cout << forceSensor.checkFall() << endl;
//    
//    return 0;
//}
