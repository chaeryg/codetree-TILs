#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    int mid;

    if(a>b)
    {
        if(a<c)
        {
            mid =a;
        }
        else if(a>c)
        {
            if(b>c)
            {
                mid = b;
            }
            else{
                mid =c;
            }
        }
    }

    cout << mid;
    return 0;
}