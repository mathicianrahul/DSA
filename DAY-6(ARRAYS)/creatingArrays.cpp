#include <iostream>
using namespace std;
int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int Len = sizeof(arr) / sizeof(int);

  for (int indx = 0; indx < Len - 1; indx++) {
    cout << arr[indx] << ' ';
  }
  return 0;
}
