#include "RobotOperator.h"
#include "Encryption.h"
#include <iostream>

RobotOperator::RobotOperator(const std::string& name, const std::string& surname, unsigned int accessCode)
    : name(name), surname(surname), accessCode(Encryption::encrypt(accessCode)), accessState(false) {}

int RobotOperator::encryptCode(int code) {
    return Encryption::encrypt(code);
}

int RobotOperator::decryptCode(int code) {
    return Encryption::decrypt(code);
}

bool RobotOperator::checkAccessCode(int code) {
    return (accessCode == encryptCode(code));
}

void RobotOperator::print() {
    std::cout << "Name: " << name << "\nSurname: " << surname << "\nAccess State: " << (accessState ? "Authorized" : "Unauthorized") << std::endl;
}
