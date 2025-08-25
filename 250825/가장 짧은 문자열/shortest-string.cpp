#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    // Please write your code here.

    string str1;
    string str2;
    string str3;

    cin >> str1 >> str2 >> str3;

    int arr[3] = {int(str1.length()), int(str2.length()), int(str3.length())};
    int max = 0;

    for(int i = 0; i < 3; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }

    int min = 21;
    for(int i = 0; i < 3; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << max-min;
    return 0;
}