#include <iostream>
using namespace std;
int fib (int x);
int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    cout << "The result of " << n << "th fibonacci number is " << fib(n) << endl;
}
int fib(int x)
{
    if (x==0) return 0;
    else if (x==1) return 1;
    else return (fib(x-1)+fib(x-2));
}
