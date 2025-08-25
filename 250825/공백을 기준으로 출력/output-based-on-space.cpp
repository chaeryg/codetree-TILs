#include <iostream>
#include <string>
using namespace std;


string eraseBlank(string strA, string strB)
{
    string str = strA + strB;
    string newStr;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != ' ')
        {
            newStr += str[i];
        }
    }

    return newStr;
}
int main() {
    // Please write your code here.
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    string str = eraseBlank(str1,str2);

    cout << str;

    
    return 0;
}