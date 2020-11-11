#include <iostream>
#include <string>
using namespace std;

int main() {
  bool screen_is_on = true;
  bool movie_is_playing = false;
  
  if (screen_is_on && movie_is_playing) {
    cout << "You are currently watching a movie on your computer.";
  }
  return 0;
}
