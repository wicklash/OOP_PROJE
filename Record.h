#ifndef RECORD_H
#define RECORD_H
#include <fstream>
#include <string>

class Record {
private:
    std::string fileName;
    std::fstream file;

public:


    Record(const std::string& name);  // Constructor to set the file name
    ~Record();
    bool openFile();
    bool closeFile();
    std::string readLine();
    bool writeLine(const std::string& str);
    Record& operator<<(const std::string& str);
    Record& operator>>(std::string& str);
};

#endif // RECORD_H
