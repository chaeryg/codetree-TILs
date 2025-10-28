#include <iostream>

using namespace std;

int n;
int arr[50];

void isEvenHalf(int arr[])
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            arr[i] /= 2;
        }
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    isEvenHalf(arr);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}