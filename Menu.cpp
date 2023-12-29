#include <iostream>
#include <limits>
#include "SonarSensor.h"
#include "BumperSensor.h"
#include "ForceSensor.h"
#include "RobotControl.h"

using namespace std;

class Menu {
public:
    // Constructor
    Menu() : realApi(), sonarSensor(&realApi), forceSensor(&realApi), bumperSensor(&realApi), robot(&realApi) {}

    void displayMenu() const {
        cout << "1. Connection\n";
        cout << "2. Motion\n";
        cout << "3. Sensor\n";
        cout << "4. Quit\n";
        cout << "Choose one: ";
    }

    int getUserChoice() const {
        int choice;
        cin >> choice;

        // Check for valid input
        const int maxBufferSize = 1000;  // Use a large constant value
        while (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();  // Clear the error flag
            cin.ignore(maxBufferSize, '\n');  // Discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 4: ";
            cin >> choice;
        }

        return choice;
    }

    void runMenu() {
        while (true) {
            displayMenu();
            int choice = getUserChoice();

            switch (choice) {
            case 1:
                cout << "Connection selected.\n";
                robot.connectRobot();
                break;
            case 2:
                cout << "Motion selected.\n";
                
                break;
            case 3:
                cout << "Sensor selected.\n";
                
                break;
            case 4:
                cout << "Quitting...\n";
                return;
            default:
                break;
            }
        }
    }

private:
    NaoRobotAPI realApi;
    SonarSensor sonarSensor;
    ForceSensor forceSensor;
    BumperSensor bumperSensor;
    RobotControl robot;
};

int main() {
    Menu menu;
    menu.runMenu();

    return 0;
}
