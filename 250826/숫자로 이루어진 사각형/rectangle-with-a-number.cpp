#include <iostream>

using namespace std;

int N;

void printRect(int n)
{
    int j = 1;
    for(int i = 0; i < N; i++)
    {
        for(int i = 0; i <N; i++)
        {
            cout << j << " ";
            j++;
            if(j == 10)
            {
                j = 1;
            }
        }
        cout << endl;
    }
}
int main() {
    cin >> N;

    // Please write your code here.
    printRect(N);
    return 0;
}