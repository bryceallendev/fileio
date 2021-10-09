/*
    FileIORead.hpp

    Declaration file for class FileRead
*/

#ifndef INCLUDED_FILEIOREAD_HPP
#define INCLUDED_FILEIOREAD_HPP

#include "FileIO.hpp"
#include <string>

class FileIORead : public FileIO {
public:

    // constructor
    FileIORead();

    // read all data from the input stream 
    virtual void read(std::istream& in);

    // write all data to the output stream
    virtual void write(std::ostream& out) const;

    // destructor
    ~FileIORead();

private:
    std::string data;
};

#endif
