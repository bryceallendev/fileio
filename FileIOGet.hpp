/*
    FileIOGet.hpp

    Declaration file for class FileGet
*/

#ifndef INCLUDED_FILEIOGET_HPP
#define INCLUDED_FILEIOGET_HPP

#include "FileIO.hpp"
#include <istream>
#include <ostream>
#include <string>

class FileIOGet : public FileIO {
public:

    // constructor
    FileIOGet();

    // read all data from the input stream 
    virtual void read(std::istream& in);

    // write all data to the output stream
    virtual void write(std::ostream& out) const;

    // destructor
    ~FileIOGet();

private:
    std::string data;
};

#endif
