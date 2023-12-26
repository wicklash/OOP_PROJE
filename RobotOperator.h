#pragma once
#ifndef ROBOT_OPERATOR_H
#define ROBOT_OPERATOR_H
#include <string>

class RobotOperator {
private:
    std::string name;
    std::string surname;
    unsigned int accessCode;
    bool accessState;

public:
    RobotOperator(const std::string& name, const std::string& surname, unsigned int accessCode);
    int encryptCode(int code);
    int decryptCode(int code);
    bool checkAccessCode(int code);
    void print();
};

#endif // ROBOT_OPERATOR_H
