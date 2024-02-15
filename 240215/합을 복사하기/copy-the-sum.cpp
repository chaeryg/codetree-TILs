#include <iostream>

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 1;
    int b = 2;
    int c = 3;

    int total = a+b+c;
    a= total;
    b= total;
    c= total;

    std::cout << a << " " << b << " " << c;
    return 0;
}