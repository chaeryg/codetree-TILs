#include <iostream>

using namespace std;

int n1, n2;
int a[100], b[100];

bool continuousSequence()
{
    int j = 0;
    
    for(int i = 0; i <= n1-n2; i++)
    {
        for(j = 0; j < n2; j++)
        {
            if(a[i+j] != b[j])
            {
                break;
            }
        }
        if(j == n2) return true;
    }
    return false;
    
}

int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    // Please write your code here.
    if(continuousSequence())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}