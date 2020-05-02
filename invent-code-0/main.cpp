#include <iostream>
#include <string>
using namespace std;

bool Magic(const bool a, const bool b, const bool c) {
  if (a || b || c){
    return false;
  }
  if (a || b || !c){
    return false;
  }
  if (a || !b || c) { 
    return true;
  }
  if (a || !b || !c){
    return false;
  }
  if (!a || b || c) {
    return false;
  }
  if (!a || b || !c) { 
    return true;
  }
  if (!a || !b || c) {
    return false;
  }
  if (!a || !b || !c) {
    return true;
  }

int TestMagic(const bool a, const bool b, const bool c, const bool expected_answer) {
  bool answer = Magic(a, b, c);
  if (answer != expected_answer) {
    cout << "Magic(" << a << ", " << b << ", " << c << ") incorrectly returned " << answer << endl;
    return 1;
  }
  return 0;
}

// Run the program to evaluate the correctness of your function.
int main() {
  int num_incorrect = 0;
  num_incorrect = num_incorrect + TestMagic(true, true, true, false);
  num_incorrect = num_incorrect + TestMagic(true, true, false, false);
  num_incorrect = num_incorrect + TestMagic(true, false, true, true);
  num_incorrect = num_incorrect + TestMagic(true, true, false, false);
  num_incorrect = num_incorrect + TestMagic(false, true, true, false);
  num_incorrect = num_incorrect + TestMagic(false, true, false, true);
  num_incorrect = num_incorrect + TestMagic(false, false, true, false);
  num_incorrect = num_incorrect + TestMagic(false, true, false, true);

  if (num_incorrect > 0) {
    cout << "You got " << num_incorrect << " incorrect!" << endl;
  } 
  else {
    cout << "You got everything right!" << endl;
  }

  return 0;
}
