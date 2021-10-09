/*
    FileIOFactory.hpp

    Factory for FileIO
*/

#ifndef INCLUDED_FILEIOFACTORY_HPP
#define INCLUDED_FILEIOFACTORY_HPP

#include <string>
#include <memory>

#include "FileIO.hpp"

class FileIOFactory {
public:

    // factory based on approach
    static std::unique_ptr<FileIO> createFileIO(const std::string& approach);
};

#endif
