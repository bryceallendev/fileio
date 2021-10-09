/*
    FileIOFactory.cpp

    Implementation for FileIOFactory
*/

#include "FileIOFactory.hpp"
#include "FileIOGet.hpp"
#include "FileIORead.hpp"
#include "FileIOFileRead.hpp"

// read all data from the input stream 
std::unique_ptr<FileIO> FileIOFactory::createFileIO(const std::string& approach) {

    if (approach == "get")
        return std::unique_ptr<FileIO>(new FileIOGet());
    else if (approach == "read")
        return std::unique_ptr<FileIO>(new FileIOFileRead());
    else if (approach == "fileread")
        return std::unique_ptr<FileIO>(new FileIORead());
    else
        return nullptr;
}
