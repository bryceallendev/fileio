/*
    FileIOGet.cpp

    Declaration file for class FileIOGet
*/

#include "FileIOGet.hpp"

// constructor
FileIOGet::FileIOGet() {
}

// read all data from the input stream 
void FileIOGet::read(std::istream& in) {

    char c;
    in.unsetf(std::ios::skipws);
    while (in.get(c)) {
        data += c;
    }
}

// write all data to the output stream
void FileIOGet::write(std::ostream& out) const {

    out << data;
}

// destructor
FileIOGet::~FileIOGet() {
}
