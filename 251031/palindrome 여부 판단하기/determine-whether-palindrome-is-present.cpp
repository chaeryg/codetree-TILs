#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


string A;

bool reverseString(string s)
{
    string original = s;
    reverse(s.begin(), s.end());

    if(original == s)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    cin >> A;

    // Please write your code here.
    if(reverseString(A))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }    

    return 0;
}