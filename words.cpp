//
// Created by Joseph Mendoza on 8/18/23.
//
#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

#include "words.h"

void words() {

    string firstWord;
    string secondWord;

    cout << "Enter a word: " ;
    cin >> firstWord;

    cout << "Enter a another word: " ;
    cin >> secondWord;

    size_t firstLength = firstWord.length();
    size_t secondLength = secondWord.length();

   if (firstLength == secondLength) {
       cout << "The two words have the same length.";
   } else if (firstLength > secondLength) {
       cout << "Your first word is longer than the second word.";
   } else {
       cout << "Your second word is longer than your first word.";
   }

}
