#include "Model.h"

Model::Model(){
    cout << "Model contructor" << endl;
}

Model::~Model(){
    cout << "Model destructor" << endl;
}

string Model::translateSingleConsonant(char consonant){
    string str(1, consonant);
    return str + "o" + str;
}

string Model::translateSingleVowel(char vowel){
    string str(1, vowel);
    return str;
}