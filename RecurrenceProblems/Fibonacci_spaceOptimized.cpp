#include <iostream>
using namespace std;
int fib( int n);
int main ()
{
    int x;
    cin >> x;
    cout << fib(x) << endl;
}
int fib (int n)
{
    int i, first = 0, second = 1, c;
    if (n == 0) return first;
    for  (i = 2; i<=n; i++)
    {
        c = first + second;
        first  = second;
        second = c;

    }
     return second;
}

