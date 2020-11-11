#include <iostream>
#include <string>
using namespace std;

bool Magic(const bool a, const bool b, const bool c) {
    bool answer = Magic(a, b, c);
  if (answer != expected_answer) {
    cout << "Magic (" << a << ", " << b << ", " << c << ") incorrectly returned " << answer << endl;
    return true;
  }
  return false;
}

// You don't have to change this function.

// Run the program to evaluate the correctness of your function.
int main() {
  int num_incorrect = 0;
  num_incorrect = num_incorrect + Magic(true, true, true, false);
  num_incorrect = num_incorrect + Magic(true, true, false, false);
  num_incorrect = num_incorrect + Magic(true, false, true, false);
  num_incorrect = num_incorrect + Magic(true, true, false, false);
  num_incorrect = num_incorrect + Magic(false, true, true, false);
  num_incorrect = num_incorrect + Magic(false, true, false, false);
  num_incorrect = num_incorrect + Magic(false, false, true, false);
  num_incorrect = num_incorrect + Magic(false, true, false, false);

  if (num_incorrect > 0) {
    cout << "You got " << num_incorrect << " incorrect!" << endl;
  } else {
    cout << "You got everything right!" << endl;
  }

  return 0;
}
