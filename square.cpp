#include <iostream>

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:
  while (i < 10 && square < 81) {
    std::cout << i << "   " << square*square << "\n";
    i++;
    square++;
  }
}