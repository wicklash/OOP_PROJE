#include "Record.h"
#include <iostream>

int main() {
    // Test the Record class

    // Test 1: Create a Record object
    Record myRecord("test.txt");

    // Test 2: Open the file
    if (myRecord.openFile()) {
        std::cout << "File opened successfully." << std::endl;

        // Test 3: Read lines from the file
        std::string line1, line2;
        myRecord >> line1 >> line2;

        std::cout << "Line 1: " << line1 << std::endl;
        std::cout << "Line 2: " << line2 << std::endl;

        // Test 4: Close the file
        if (myRecord.closeFile()) {
            std::cout << "File closed successfully." << std::endl;
        }
        else {
            std::cerr << "Error: Unable to close the file." << std::endl;
            return 1;
        }
    }
    else {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1;
    }

    return 0;
}
