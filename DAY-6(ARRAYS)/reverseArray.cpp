#include <iostream>
using namespace std;

void reversArray(int *arr, int n) {
  int coppyArr[n];

  for (int i = 0; i < n; i++) {
    int j = n - i - 1;
    coppyArr[i] = arr[j];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = coppyArr[i];
    cout << arr[i] << ',';
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  reversArray(arr, n);

  return 0;
}