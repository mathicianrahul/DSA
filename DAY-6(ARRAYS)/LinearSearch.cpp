#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
    }
  }
  return -1;
}

int main() {

  int arr[] = {12, 54, 64, 65, 73, 23, 54, 67, 86, 73, 56};
  int n = sizeof(arr) / sizeof(int);
  int a = linearSearch(arr, n, 124);
  cout << a << endl;
  return 0;
}