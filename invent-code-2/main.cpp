#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  cout << "Enter a number: ";
  int a; 
  cin >> a;
  return a;
}

int main() {
  int A = GetUserInput(); 
  if (A % 3 == 0) {
    cout << "Fizz";
  }
  if (A % 5 == 0)
  cout << "Buzz"; 
  }
  if (A % 3 > 0) {
    if (A % 5 > 0) {
      cout << A;
    }
  return 0; 
  }


  

