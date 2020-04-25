#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  int num_from_user;
  cout << "Enter a number: ";
  cin >> num_from_user;

  if (num_from_user % 3 == 0 && num_from_user % 5 == 0) {
    cout << "FizzBuzz";
  }
  else if (num_from_user % 3 == 0) {
    cout << "Fizz";
  }

  else if (num_from_user % 5 == 0) {
    cout << "Buzz";
  }
  else {
    cout << num_from_user;
  }
  return num_from_user;
}

int main() {
  int user_input = GetUserInput();
  cout << ". You entered this number: " << user_input << endl;
  return 0;
}
