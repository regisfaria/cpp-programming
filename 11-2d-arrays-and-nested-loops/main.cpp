#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum) {
  string dayName;

  switch(dayNum) {
    case 0:
      dayName= "Sunday";
      break;
    case 1:
      dayName= "Monday";
      break;
    case 2:
      dayName= "Tuesday";
      break;
    case 3:
      dayName= "Wednesday";
      break;
    case 4:
      dayName= "Thursday";
      break;
    case 5:
      dayName= "Friday";
      break;
    case 6:
      dayName= "Saturday";
      break;
    default:
      dayName = "Invalid Day Number";
  }

  return dayName;
}

int main() {
  for(int i=0; i < 7; i++) {
    cout << getDayOfWeek(i) << endl;
  }

  cout << "=========================" << endl;
  
  int j;
  while(j < 7) {
    cout << getDayOfWeek(j) << endl;
    j++;
  }
  
  return 0;
}