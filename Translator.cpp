#include "Translator.h"

Translator::Translator(){
    mo = new Model();
    cout << "Translator contructor" << endl;
}

Translator::~Translator(){
    delete mo;
    cout << "Translator destructor" << endl;
}

string Translator::translateEnglishWord(string word){
    string newWord;
    for(int i = 0; i < word.size(); ++i){
        char letter = word[i];
        if(!(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')){
            newWord += mo->translateSingleConsonant(word[i]);
        }
        else{
            newWord += mo->translateSingleVowel(word[i]); //this may need to be casted to string or something
        }
    }
    return newWord;
}

string Translator::translateEnglishSentence(string sentence){
    string newSentence;
    for(int i = 0; i < sentence.size(); ++i){
        char letter = sentence[i];
        if(sentence[i] == ' '){
            newSentence += ' ';
        }
        else if(!(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u')){
            newSentence += mo->translateSingleConsonant(sentence[i]);
        }
        else{
            newSentence += mo->translateSingleVowel(sentence[i]);
        }
    }
    return newSentence;
}