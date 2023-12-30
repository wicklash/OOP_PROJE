#ifndef ENCRYPTION_H
#define ENCRYPTION_H

//! This class provides encryption and decryption functionality
class Encryption {
public:
    //! Encrypts the given code
    static int encrypt(int code);

    //! Decrypts the given code
    static int decrypt(int code);
};

#endif //! ENCRYPTION_H
