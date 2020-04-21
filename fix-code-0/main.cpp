#include <iostream>
#include <string>
using namespace std;

int main() {
  bool is_not_raining = true;
  bool has_umbrella = false;
  if (has_umbrella || is_not_raining) {
cout << "You can go outside without getting wet." << endl;
  }
  return 0;
}
