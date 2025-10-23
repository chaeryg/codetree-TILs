#include <iostream>

using namespace std;

int a, b, c;

int findMin(int a, int b, int c)
{
   int min = 0;

   if(a <= b && a <= c)
   {
        min = a;
   }
   else if(b <= a && b <= c)
   {
        min = b;
   }
   else
   {
        min = c;
   }
    return min;
}
int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    cout << findMin(a,b,c) << endl;
    return 0;
}