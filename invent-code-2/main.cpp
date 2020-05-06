#include <iostream>
#include <string>
using namespace std;

int GetUserInput() {
  int num_from_user;
  cout << "Enter a number: ";
  cin >> num_from_user;
  return num_from_user;
}

string Calculate(int input){
  if ((input%3 == 0) && (input%5 != 0)){
    return "Fizz";
  }
  if ((input%3 != 0) && (input%5 == 0)){
    return "Buzz";
  }
  if ((input%3 == 0) && (input%5 == 0)){
    return "FizzBuzz";
  }
  else {
    cout << input << endl;
  }
  return 0;
}

int main() {
  int userinput = GetUserInput();
  string answer = Calculate(userinput);
  cout << answer;
}
