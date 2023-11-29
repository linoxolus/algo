#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

long double fibonacci(int index) {
    long double a = pow((1 + sqrt(5))/2, index);
    long double b = pow((1 - sqrt(5))/2, index);
    long double result = (a - b)/sqrt(5);
    return result;
}

string formatOutput(string text){
    size_t dotPos = text.find(".");

    if (dotPos == string::npos) {
        return text;
    } 

    return text.substr(0, dotPos);
}

int main() {
    vector<int> array;
    string inputData, outputData;
    fstream inputFile, outputFile;
    inputFile.open("FIBO.INP");
    outputFile.open("FIBO.OUT");

    while(getline(inputFile, inputData)) {
        array.push_back(stoi(inputData));
    };
    
    for(int i = 1; i < array[0] + 1; i++) {
        outputData += formatOutput(to_string(fibonacci(array[i])));
        if(i < array[0]) {
            outputData += "\n";
        }
    }

    outputFile << outputData;

    inputFile.close();
    outputFile.close();
    return 0;
}