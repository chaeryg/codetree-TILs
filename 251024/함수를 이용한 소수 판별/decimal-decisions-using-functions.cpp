#include <iostream>

using namespace std;

int a, b;

bool isPrime(int i)
{
    for(int j = 2; j < i; j++)
    {
        if(i%j==0)
        {
            return false;
        }
    }
    return true;
}
int primeSum(int a, int b)
{
    int sum = 0;

    for(int i = a; i <= b; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }
    return sum;
}
int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << primeSum(a,b) << endl;

    return 0;
}