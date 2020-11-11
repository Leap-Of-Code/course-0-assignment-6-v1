#include <iostream>
#include <string>
using namespace std;

int main() {
  bool employees_at_work = false;
  bool is_after_closing_time = false;

  if (employees_at_work && is_after_closing_time) {
    cout << "The shop is closed.";
  }
  return 0;
}
