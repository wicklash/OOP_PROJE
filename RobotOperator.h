#ifndef ROBOT_OPERATOR_H
#define ROBOT_OPERATOR_H

#include <string>
#include "Encryption.h" //! Include the header file for Encryption class

class RobotOperator {
private:
    std::string name;            //! Name of the user
    std::string surname;         //! Surname of the user
    unsigned int accessCode;      //! Access code of the user
    bool accessState;            //! Current access state of the user

public:
    //! Constructor: Initializes the RobotOperator with name, surname, and access code
    RobotOperator(const std::string& name, const std::string& surname, unsigned int accessCode);

    //! Encrypts the provided access code using the Encryption class
    int encryptCode(int code);

    //! Decrypts the provided access code using the Encryption class
    int decryptCode(int code);

    //! Checks if the provided access code matches the operator's(user's) access code
    bool checkAccessCode(int code);

    //! Prints information about user
    void print();
};

#endif //! ROBOT_OPERATOR_H
