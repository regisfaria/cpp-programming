#include <iostream>

using namespace std;

int main() {
  string phrase = "Learning C++";

  // .find() prints the index of the first string/char given
  cout << phrase.find("C++", 0) << endl;

  // .substr() takes a substring from a string
  cout << phrase.substr(9, phrase.length()) << endl;

  return 0;
}