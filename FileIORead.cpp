/*
    FileIORead.cpp

    Declaration file for class FileIORead
*/

#include "FileIORead.hpp"

#include <sys/types.h>
#if !defined(_MSC_VER)
#include <unistd.h>
#else
#include <io.h>
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;
#endif
#include <errno.h>

// constructor
FileIORead::FileIORead()
    : data(1000, ' ') {
}

// read all data from the input stream 
void FileIORead::read(std::istream& in) {

    while (true) {

        const int BUFFER_SIZE = 4096;
        char buf[BUFFER_SIZE];
        ssize_t numbytes = 0;
        while (((numbytes = ::read(0, buf, BUFFER_SIZE)) == -1) && (errno == EINTR)) {
        }
        if (numbytes == -1)
            return;
        if (numbytes == 0)
            break;

        data.assign(buf, numbytes);
    }
}

// write all data to the output stream
void FileIORead::write(std::ostream& out) const {

    out << data;
}

// destructor
FileIORead::~FileIORead() {
}
