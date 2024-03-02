#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    int month;
    int day;
    char d;

    cin >> year >> d >> month >> d >> day;
    d = '-';
    cout << month << d << day << d << year;
    return 0;
}