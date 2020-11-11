#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  int num_from_user;
  cout << "Enter a number: ";
  cin >> num_from_user;
  return num_from_user;
}

int main() {
  int multiple = GetUserInput();
  if (((multiple / 3) == (multiple / 3.0)) && ((multiple / 5) == (multiple / 5.0))) {
      cout << "FizzBuzz" << endl;
    }
  else if (((multiple / 3) == (multiple / 3.0))) {
    cout << "Fizz" << endl;
  }
  else if (((multiple / 5) == (multiple / 5.0))) {
    cout << "Buzz" << endl;
  }
  else {
    cout << multiple << endl;
  }
  return 0;
}
