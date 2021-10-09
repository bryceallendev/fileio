/*
    FileIOFileRead.cpp

    Declaration file for class FileIOFileRead
*/

#include "FileIOFileRead.hpp"

static const int BUFFER_SIZE = 4096;

// constructor
FileIOFileRead::FileIOFileRead()
    : pdata(new char[BUFFER_SIZE]), pos(0) {
}

// read all data from the input stream 
void FileIOFileRead::read(std::istream& in) {

    while (true) {

        in.read(&(pdata[pos]), BUFFER_SIZE);
        if (in.gcount() == 0)
            break;

        pos += in.gcount();
    }
}

// write all data to the output stream
void FileIOFileRead::write(std::ostream& out) const {

    out.write(&(pdata[0]), pos);
}

// destructor
FileIOFileRead::~FileIOFileRead() {}
