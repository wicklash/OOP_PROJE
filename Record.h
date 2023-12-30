#ifndef RECORD_H
#define RECORD_H

#include <fstream>
#include <string>

class Record {
private:

    std::string fileName;   //! Name of the file associated with the record
    std::fstream file;      //! File stream used for reading and writing

public:
    //! Constructor: Sets the file name when a Record object is created
    Record(const std::string& name);

    //! Destructor: Closes the file when the Record object goes out of scope
    ~Record();

    //! Opens the file associated with the record
    bool openFile();

    //! Closes the file associated with the record
    bool closeFile();

    //! Reads a line from the file and returns it as a string
    std::string readLine();

    //! Writes a line to the file
    bool writeLine(const std::string& str);

    //! Overloaded insertion operator (<<) to write a string to the file
    Record& operator<<(const std::string& str);

    //! Overloaded extraction operator (>>) to read a string from the file
    Record& operator>>(std::string& str);
};

#endif //! RECORD_H
