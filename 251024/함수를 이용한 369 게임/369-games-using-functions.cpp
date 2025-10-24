#include <iostream>


using namespace std;

int a, b;

bool Clap(int i)
{
    while(i > 0)
    {
        if(i%10==3 || i%10==6 || i%10==9)
        {
            return true;
        }
        i/=10;
    }
    return false;
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