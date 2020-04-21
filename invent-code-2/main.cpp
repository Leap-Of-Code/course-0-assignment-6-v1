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
  // Write code here.
  int number;
  number = GetUserInput();
  bool divide_by_3 = (number % 3 == 0);
  bool divide_by_5 = (number % 5 == 0);

  if (divide_by_3 && !divide_by_5) {
    cout << "Fizz!" << endl;
  } else if (!divide_by_3 && divide_by_5) {
    cout << "Buzz!" << endl;
  } else if (divide_by_3 && divide_by_5) {
    cout << "FizzBuzz!" << endl;
  } else {
    cout << number << endl;
  }

  return 0;
}
