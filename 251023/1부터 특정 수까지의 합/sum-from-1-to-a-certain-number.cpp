#include <iostream>

using namespace std;

int N;

int sumN()
{
    int sum = 0;

    for(int i=1; i <= N; i++)
    {
        sum += i;
    }
    
    sum /= 10;

    return sum;
}
int main() {
    cin >> N;

    // Please write your code here.
    int sum = sumN();

    cout << sum << endl;
    return 0;
}