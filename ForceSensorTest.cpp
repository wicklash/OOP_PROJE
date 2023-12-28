#include <iostream>
#include "ForceSensor.h"

int main() {
    // Create a robot object
    NaoRobotAPI* nao = new NaoRobotAPI();

    // Make connection to Nao
    nao->connect();

    // Create a ForceSensor object
    ForceSensor* forceSensor = new ForceSensor();

    // Move forward for a few steps and update force sensor
    nao->moveRobot(FORWARD);
    Sleep(5000); // Assuming 5 seconds is enough for the robot to move
    nao->stopRobot();
    forceSensor->updateSensor(nao->getFootForce());

    // Check if the robot has fallen
    if (forceSensor->checkFall()) {
        std::cout << "Robot has fallen!" << std::endl;
    }
    else {
        std::cout << "Robot is still standing." << std::endl;
    }

    // Close connection to the robot
    nao->disconnect();

    // Delete objects
    delete nao;
    delete forceSensor;

    return 0;
}
