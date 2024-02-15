#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 5;
    int b = 6;
    int c = 7;

    int beA = a;
    int beB = b;
    int beC = c;
    b=beA;
    c=beB;
    a=beC;

    std::cout << a << "\n" << b << "\n" << c;
    return 0;
}