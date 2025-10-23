#include <iostream>

using namespace std;

int n, m;

void lcdd(int n,int m)
{
    int gcd_n;
    int gcd_m;
    int r = 1;
    int lcd_mn;
    int temp;

    if(n<m)
    {
        temp = n;
        n = m;
        m = temp;
    }

    gcd_n = n;
    gcd_m = m;

    while(r!=0)
    {
        r=gcd_n % gcd_m;
        gcd_n = gcd_m;
        gcd_m = r;
    }

    lcd_mn = (m*n)/gcd_n; //n과 m의 최소공배수는 (n*m)/(n과 m의 최대공약수)

    cout << lcd_mn << endl;
}
int main() {
    cin >> n >> m;

    // Please write your code here.
    lcdd(n,m);

    return 0;
}