#include <iostream>

using namespace std;

int N;

void helloWorld(int N)
{
    if(N==0) return;

    helloWorld(N-1);
    cout << "HelloWorld" << endl;
}
int main() {
    cin >> N;

    // Please write your code here.
    helloWorld(N);
    return 0;
}