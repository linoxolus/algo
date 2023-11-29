#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

string uocSo(int a, int b)
{
    int sum = 0, length = 0;
    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
                length++;
            }
        }
    }

    return to_string(length) + " " + to_string(sum);
}

string formatInput(string text, int index)
{
    size_t spacePoint = text.find(" ");

    if (spacePoint == string::npos)
    {
        return text;
    }

    if (index == 0) {
        return text.substr(index, spacePoint);
    } else {
        return text.substr(spacePoint + 1);
    }
}

int main()
{
    fstream inputFile, outputFile;
    string inputData, outputData;
    inputFile.open("UOCSO.INP");
    outputFile.open("UOCSO.OUT");
    vector<vector<int>> array;
    vector<int> temp;
    bool isFirst = true;
    int count = 0;

    while (getline(inputFile, inputData))
    {
        if (isFirst)
        {
            count = stoi(inputData);
            isFirst = false;
        }
        else
        {
            temp.clear();
            temp.push_back(stoi(formatInput(inputData, 0)));
            temp.push_back(stoi(formatInput(inputData, 1)));
            array.push_back(temp);
        }
    }

    for (int i = 0; i < count; i++)
    {
        string currentData = uocSo(array[i][0], array[i][1]);
        if (i < count - 1) {
            currentData += "\n";
        }
        outputData += currentData;
    }

    outputFile << outputData;

    inputFile.close();
    outputFile.close();
    return 0;
}