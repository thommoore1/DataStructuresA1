#include "FileProcessor.h"
#include "Model.h"
#include "Translator.h"
#include <fstream>
#include <string>

int main(int argc, char **argv){
    FileProcessor *fp = new FileProcessor();
    fp->processFile("toBeTranslated.txt", "output.html");
    delete fp;
    return 0;
}