#include <iostream>
#include <string>
using namespace std;

int main() {
  string word;
  //Welcome User
  cout << "Welcome to PigLatin Converter \n";
  //Ask for Word
  cout << "Enter Your Word Here: \n";
  getline(cin, word);
  //show user word
  cout << "Your Word is: " << word << "\n";
  //Save first letter as char
  char firstLetter= word.at(0);
  cout << firstLetter;
  //remove first letter
  string word2 = word.substr(1);
  cout << word2;
  //Append "ay" to the end
  word = word2 + firstLetter + "ay";
  //Show Converted Word
  cout << "\nFull PigLatin: " << word;
}