#include <iostream>

using namespace std;

int a, b;

bool isPrimeEven(int n)
{
    for(int i = 2; i < n; i++) //소수 판정
    {
        if(n%i==0)
        {
            return false;
        }
    }

    int one = n % 10;
    int ten = n / 10;
    int hund = n / 100;
    int sum = one + ten + hund;

    if(sum%2 != 0)
    {
        return false;
    }

    return true;
}


int main() {
    cin >> a >> b;

    // Please write your code here.
    int cnt = 0;

    for(int i = a; i <= b; i++)
    {
        if(isPrimeEven(i))
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}