#include <iostream>
using namespace std;
int main() {
  int a = 10;
  int *aptr = &a;

  cout << aptr << "\n"; // 8 9 a b c d e f

  aptr++;
  cout << aptr
       << "\n"; // when we increase the pointer then it will move 4 byte,
                // because int variable contains 4 bytes in one variable, if we
                // aptr++ for character, it will move only one position

  return 0;
}