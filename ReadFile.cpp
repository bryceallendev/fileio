/*
    virtdest.cpp

    Demonstraton of virtual & destructor use/misuse
*/

#include <iostream>
#include <memory>

#include "FileIOFactory.hpp"

int main(int argc, char* argv[]) {

    // require approach
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <approach> " << '\n';
        return 1;
    }

    // create a file reader based on the one selected
    std::unique_ptr<FileIO> fileReader = FileIOFactory::createFileIO(argv[1]);
    if (!fileReader) {
        std::cerr << argv[0] << ": Unknown approach " << argv[1] << '\n';
        return 1;
    }

    // read in the istream
    fileReader->read(std::cin);

    // write to standard out
    fileReader->write(std::cout);

    return 0;
}
