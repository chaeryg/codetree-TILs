#include <iostream>
#include <string>

using namespace std;

string A;

bool decision(string s)
{
    int cnt = 0;
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 0; j < s.length(); j++)
        {
            if(s[i] != s[j]) cnt++;
        }
    }
    if(cnt > 0)
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
    if(decision(A))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}