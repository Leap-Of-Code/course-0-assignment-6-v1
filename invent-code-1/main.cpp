#include <iostream>
#include <string>
using namespace std;

bool Magic(const bool a, const bool b, const bool c, const bool d) {
  if (a || b || c || d){
    return true;
  }
  if (a || b || c || !d){
    return false; 
  }
  if (a || b || !c || d){
    return true; 
  }
  if (a || b || !c || !d){
    return false;
  }
  if (a || !b ||)
}



int main() {
  return 0;
}

