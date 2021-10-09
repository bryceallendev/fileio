/*
    FileIOFileRead.hpp

    Declaration file for class FileGet
*/

#ifndef INCLUDED_FILEIOFILEREAD_HPP
#define INCLUDED_FILEIOFILEREAD_HPP

#include "FileIO.hpp"
#include <istream>
#include <ostream>
#include <memory>

class FileIOFileRead : public FileIO {
public:

    // constructor
    FileIOFileRead();

    // read all data from the input 
    virtual void read(std::istream& in);

    // get of the data from the input
    virtual void write(std::ostream& out) const;

    // destructor
    ~FileIOFileRead();

private:
    std::unique_ptr<char[]> pdata;
    int pos;
};

#endif
