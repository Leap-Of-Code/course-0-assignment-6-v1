#include <iostream>
#include <string>
using namespace std;

bool Magic(const bool a, const bool b, const bool c, const bool d) {
  if (a && b && c && d){
    return true;
  }
  if (a && b && c && !d){
    return false; 
  }
  if (a && b && !c && d){
    return true; 
  }
  if (a && b && !c && !d){
    return false;
  }
  if (a && !b && c && d){
    return true;
  }
  if (a && !b && c && !d){
    return false; 
  }
  if (a && !b && !c && d){
    return true; 
  }
  if (a && !b && !c && !d){
    return false; 
  }
  if (!a && b && c && d){
    return true;
  }
  if (!a && b && c && !d){
    return false; 
  }
  return false;
}

int TestMagic(const bool a, const bool b, const bool c, const bool d, const bool expected_answer) {
  bool answer = Magic(a, b, c, d);
  if (answer != expected_answer) {
    cout << "Magic(" << a << ", " << b << ", " << c << ", " << d << ") incorrectly returned " << answer << endl;
    return 1;
  }
  return 0;
}


int main() {
  int num_incorrect = 0;
  num_incorrect = num_incorrect + TestMagic(true, true, true, true, true);
  num_incorrect = num_incorrect + TestMagic(true, true, true, false, false);
  num_incorrect = num_incorrect + TestMagic(true, true, false, true, true);
  num_incorrect = num_incorrect + TestMagic(true, true, false, false, false);
  num_incorrect = num_incorrect + TestMagic(true, false, true, true, true);
  num_incorrect = num_incorrect + TestMagic(true, false, true, false, false);
  num_incorrect = num_incorrect + TestMagic(true, false, false, true, true);
  num_incorrect = num_incorrect + TestMagic(true, false, false, false, false);
  num_incorrect = num_incorrect + TestMagic(false, true, true, true, true);
  num_incorrect = num_incorrect + TestMagic(false, true, true, false, false);

  if (num_incorrect > 0) {
    cout << "You got " << num_incorrect << " incorrect!" << endl;
  } 
  else {
    cout << "You got everything right!" << endl;
  }
  return 0;
}
