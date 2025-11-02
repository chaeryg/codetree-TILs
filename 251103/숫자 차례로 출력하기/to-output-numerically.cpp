#include <iostream>

using namespace std;

int N;
void recursiveOne(int N)
{
    if(N == 0) return;

    recursiveOne(N-1);
    cout << N << " ";
}
void recursiveTwo(int N)
{
    if(N==0) return;

    cout << N << " ";
    recursiveTwo(N-1);
}
int main() {
    cin >> N;

    // Please write your code here.
    recursiveOne(N);
    cout << endl;
    recursiveTwo(N);
    
    return 0;
}