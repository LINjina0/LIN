#include <iostream>
 
using namespace std;
class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        if(n==0||n==1)
        {return n;}
        int c[n + 1];
        c[0]=0;
        c[1]=1;
        for(int i=2;i<=n;i++)
        {
            c[i]=c[i-1]+c[i-2];
        }
    return c[n];

    }
};
int main( )
{
   char str[] = "Hello C++";
   int n;
   Solution  a;
   cout << "the num is : ";
   cin >> n;
   a.fib(n);
   //ss
   cout << "Value of num is : " << a.fib(n) << endl;
   //cout << "Value of str is : " << str << endl;
}
