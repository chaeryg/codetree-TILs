#include <iostream>

using namespace std;

int a;
int c;
char o;

int fourOper(int a, char o, int c)
{
    if(o=='+')
    {
        return (a+c);
    }
    else if(o=='-')
    {
        return (a-c);
    }
    else if(o=='/')
    {
        return (a/c);
    }
    else if(o=='*')
    {
        return (a*c);
    }
    else
    {
        return 300;
    }
}
int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    if(fourOper(a,o,c)==300)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << a << " " << o << " " << c << " = " << fourOper(a,o,c) << endl;
    }
    return 0;
}