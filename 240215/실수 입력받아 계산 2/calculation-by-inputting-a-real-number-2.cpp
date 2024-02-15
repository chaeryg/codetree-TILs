#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double a = 0;
    cin >> a;

    double b = a  + 1.5;

    cout << fixed << setprecision(2) << b;
    return 0;
}