#include <iostream>

using namespace std;

int main() {
  int myarray[10] = {1, 2, 3, 4, 5, 6, 7};

  myarray[9] = 100;

  cout << myarray[9];
  
  return 0;
}