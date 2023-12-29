#include "RobotOperator.h"
#include <iostream>

int main() {

    // Check access with a correct code
    RobotOperator operator1("safiullah", "sediqi", 1234);

    // Check access with an incorrect code
    RobotOperator operator2("John", "Doe", 4444);

    // Display operator information
    std::cout << "Operator1 Information:\n";
    operator1.print();

    // Check access for operator1
    int enteredCode = 1234;

    //check if the code match with the AccessCode
    if (operator1.checkAccessCode(enteredCode)) {
        std::cout << "Access granted!\n";
    }
    else {
        std::cout << "Access denied!\n";
    }
    std::cout << "\n";

    // Check access for operator2 
    std::cout << "Operator2 Information:\n";
    operator2.print();

    //check if the code match with the AccessCode
    if (operator2.checkAccessCode(enteredCode)) {
        std::cout << "Access granted!\n";
    }
    else {
        std::cout << "Access denied!\n";
    }

    return 0;
}
