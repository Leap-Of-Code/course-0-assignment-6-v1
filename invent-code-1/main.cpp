#include <iostream>
#include <string>
using namespace std;

bool Magic(const bool a, const bool b, const bool c, const bool d) {
  //Write code here
  bool result = (a && b && c && d) || (a && b && !c && d) || (a && !b && c && d) || (a && !b && !c && d) || (!a && b && c && d) || (!a && b && !c && d) || (!a && !b && c && d) || (!a && !b && !c && d);
  cout << "Magic(" << a << ", " << b << ", " << c << ", " << d << ") = " << result << endl;
  return 1;
}

// Run the program to evaluate the correctness of your function.
int main() {
  bool result;
  result = Magic(true, true, true, true);
  result = Magic(true, true, true, false);
  result = Magic(true, true, false, true);
  result = Magic(true, true, false, false);
  result = Magic(true, false, true, true);
  result = Magic(true, false, true, false);
  result = Magic(true, false, false, true);
  result = Magic(true, false, false, false);

  result = Magic(false, true, true, true);
  result = Magic(false, true, true, false);
  result = Magic(false, true, false, true);
  result = Magic(false, true, false, false);
  result = Magic(false, false, true, true);
  result = Magic(false, false, true, false);
  result = Magic(false, false, false, true);
  result = Magic(false, false, false, false);

  return 0;
}
