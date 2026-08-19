#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key) {
  int st = 0, end = n - 1;

  while (st <= end) {
    int mid = st + (end - st) / 2;

    if (arr[mid] == key) {
      cout << "Array Element " << arr[mid] << " Found at Index " << mid << endl;
      return mid;
    } else if (arr[mid] < key) { // Search Right Half
      st = mid + 1;
    } else {
      end = mid - 1; // Search Left Half
    }
  }
  return -1; // Not found
}

int main() {

  int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
  int n = sizeof(arr) / sizeof(int);

  cout << binarySearch(arr, n, 14);
}