#ifndef TRANSLATOR_H
#define TRANSLATOR_H
#include "Model.h"

#include <iostream>
using namespace std;

class Translator{
    public:
        Translator();
        ~Translator();
        string translateEnglishWord(string word);
        string translateEnglishSentence(string sentence);
    private: 
        Model *mo;
};

#endif