#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age1;
    char sex1;
    cin >> age1 >> sex1;

    int age2;
    char sex2;
    cin >> age2 >> sex2;

    if(age1 >= 19 && sex1 == 'M' || age2 >=19 && sex2 =='M')
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}