#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;

    cin >> a >> b;

    cout << fixed << setprecision(2) << (double)(((double)a+b)/((double)a-b));
    return 0;
}