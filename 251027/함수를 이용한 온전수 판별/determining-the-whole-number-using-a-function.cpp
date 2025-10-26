#include <iostream>

using namespace std;

int a, b;

bool decideNumber(int i)
{
        if(i%2==0)
        {
            return false;
        }
        if(i%10==5)
        {
            return false;
        }
        if(i%3==0 && i%9 != 0)
        {
            return false;
        }
        
        return true;
}
int main() {
    cin >> a >> b;
    int cnt = 0;
    // Please write your code here.
    for(int i = a; i <= b; i++)
    {
        if(decideNumber(i))
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}