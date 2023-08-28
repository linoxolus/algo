#include <bits/stdc++.h>
using namespace std;

void insertionSort(std::vector<int>& arr) {
  int n = arr.size();
  for(int i = 1; i < n; i++) {
    int current = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > current) {
      arr[j + 1] = arr[j];
      j--; 
    }
    current = arr[j + 1];
  }
}

void printOutput(vector <int> arr) {
  for(int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ", ";
  }
} 

int main() {
  vector <int> myArray = { 99, 4, 91, 63, 17, 58 };
  insertionSort(myArray);
  printOutput(myArray);
}