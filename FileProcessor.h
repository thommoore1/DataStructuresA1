#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include "Translator.h"

#include <iostream>
#include <fstream>//why can't I do ofstream
#include <sstream>
using namespace std;

class FileProcessor{
    public:
        FileProcessor();
        ~FileProcessor();
        void processFile(string englishInput, string translatedOutput);
    private: 
        Translator *tr;
};

#endif