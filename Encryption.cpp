#include "Encryption.h"

int Encryption::encrypt(int code) {
    // Encryption algorithm implementation
    // You can implement your own encryption logic here
    // For simplicity, let's assume a basic encryption: add 1 to each digit
    int encryptedCode = 0;
    int multiplier = 1;

    while (code > 0) {
        encryptedCode += ((code % 10) + 1) * multiplier;
        code /= 10;
        multiplier *= 10;
    }

    return encryptedCode;
}

int Encryption::decrypt(int code) {
    // Decryption algorithm implementation
    // You can implement your own decryption logic here
    // For simplicity, let's assume a basic decryption: subtract 1 from each digit
    int decryptedCode = 0;
    int multiplier = 1;

    while (code > 0) {
        decryptedCode += ((code % 10) - 1) * multiplier;
        code /= 10;
        multiplier *= 10;
    }

    return decryptedCode;
}
