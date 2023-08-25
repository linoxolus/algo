#include <bits/stdc++.h>
using namespace std;

void printOutput(vector <int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ", ";
    } 
}

void bubbleSort(vector <int> &arr) {
    int temp;
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr.size(); j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printOutput(arr);
}

int main() {
    vector <int> myArray = {3, 5, 2, 4, 9, 3};
    bubbleSort(myArray);
}