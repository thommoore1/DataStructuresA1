#include "FileProcessor.h"

FileProcessor::FileProcessor(){
    tr = new Translator();
    cout << "FileProcessor contructor" << endl;
}

FileProcessor::~FileProcessor(){
    delete tr;
    cout << "FileProcesser destructor" << endl;
}

void FileProcessor::processFile(string englishInput, string translatedOutput){
    string line;
    stringstream toTranslateStream;

    ifstream readFile(englishInput);
    if(readFile.is_open()){
        while(getline(readFile,line)){
            toTranslateStream << line;
        }
        readFile.close();
    }

    string toTranslate = toTranslateStream.str();

    string translated = tr->translateEnglishSentence(toTranslate);
    ofstream output;
    output.open(translatedOutput);
    output << "<p><b>" << toTranslate << "</b></p>\n";
    output << "<p></p>\n";
    output << "<p>" << translated << "</p>";
    output.close();
}