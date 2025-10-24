#include <iostream>
#include <string>

using namespace std;

int a, b;

bool Clap(int i)
{
    string i_str = to_string(i);
    
    if(i_str.find("3") != string::npos || i_str.find("6") != string::npos ||i_str.find("9") != string::npos)
    {
        return true;
    }
    else{

        return false;
    }
}

bool isThree(int i)
{
    if(i%3 ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    cin >> a >> b;

    int cnt = 0;
    // Please write your code here.
    for(int i = a; i <= b; i++)
    {
        if(Clap(i) || isThree(i))
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}