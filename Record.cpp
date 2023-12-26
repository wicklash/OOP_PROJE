#include "Record.h"
#include <iostream>

Record::Record(const std::string& name) : fileName(name) {}

Record::~Record() {
    closeFile();
}

bool Record::openFile() {
    file.open(fileName, std::ios::in | std::ios::out | std::ios::app);
    return file.is_open();
}

bool Record::closeFile() {
    if (file.is_open()) {
        file.close();
        return true;
    }
    return false;
}

std::string Record::readLine() {
    std::string line;
    std::getline(file, line);
    return line;
}

bool Record::writeLine(const std::string& str) {
    if (file.is_open()) {
        file << str << std::endl;
        return true;
    }
    return false;
}

Record& Record::operator<<(const std::string& str) {
    writeLine(str);
    return *this;
}

Record& Record::operator>>(std::string& str) {
    str = readLine();
    return *this;
}
