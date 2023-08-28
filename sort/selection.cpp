#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector <int> &arr) {
  int temp, index;
  for(int i = 0; i < arr.size(); i++) {
      index = i;
      for(int j = i + 1; j < arr.size(); j++) {
        if(arr[j] < arr[index]) {
          index = j;
        }
      }

      if(index != i) {
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
      }
   }
}

void printOutput(vector <int> arr) {
  for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
} 

int main() {
  vector <int> myArray = {75, 99, 3, 2, 80, 21, 19};
  selectionSort(myArray);
  printOutput(myArray);
}
