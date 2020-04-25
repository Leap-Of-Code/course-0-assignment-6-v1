#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  int number;
  cout << "Enter a number: ";
  cin >> number;
  return number;
}

void CalculateBuzzFizz () {

  int calculate = GetUserInput();
  bool divides_by_3 = (calculate % 3 == 0);
  bool divides_by_5 = (calculate % 5 == 0);

  if (divides_by_3 && divides_by_5) {
    cout << "FizzBuzz";
  }
  if (divides_by_3 && !divides_by_5) {
    cout << "Fizz";
  }
  if (!divides_by_3 && divides_by_5) {
    cout << "Buzz";
  }
  if (!divides_by_3 && !divides_by_5) {
    cout << calculate;
  }
}

int main() {
  // Write code here.
  CalculateBuzzFizz();
  return 0;
}
