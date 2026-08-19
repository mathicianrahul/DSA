#include <iostream>
using namespace std;

void reverse_array(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ",";
  }
}
int main() {
  int arr[] = {5, 4, 3, 2, 1};
  int n = sizeof(arr) / sizeof(int);

  int start = 0, end = n - 1;

  while (start < end) {
    // Swap
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
  reverse_array(arr, n);
  return 0;
}