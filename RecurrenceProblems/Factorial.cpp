#include <iostream>
using namespace std;
int fact (int x);
int main()
{
    int n;
    cout << "Enter the value: ";
    cin >> n;
    cout << "The result of the factorial is : " << fact(n) << endl;
}
int fact (int x)
{
    if (x==0) return 1;
    else if (x==1) return 1;
    else return (x*fact(x-1));
}
