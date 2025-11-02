#include <iostream>

using namespace std;

int n;

void recursiveStar(int a)
{
    if(a==0) return;

    for(int i = 0; i < a; i++)
    {
        cout << "*" << " ";
    }
    cout << endl;

    recursiveStar(a-1);

    for(int i = 0; i < a; i++)
    {
        cout << "*" << " ";
    }
    cout << endl;

}
int main() {
    cin >> n;

    // Please write your code here.
    recursiveStar(n);
    return 0;
}