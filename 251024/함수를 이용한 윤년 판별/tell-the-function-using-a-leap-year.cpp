#include <iostream>

using namespace std;

int y;

void isLeapYear(int n)
{
    //4로 나누어 떨어지지 않는 경우는 무조건 false
    if(n % 4 != 0)
    {
        cout << "false" << endl;
        return;
    }
    if(n % 100 == 0 && n % 400 != 0)
    {
        cout << "false" << endl;
        return;
    }
    
    cout << "true" << endl;
    return;

}
int main() {
    cin >> y;

    // Please write your code here.
    isLeapYear(y);
    return 0;
}