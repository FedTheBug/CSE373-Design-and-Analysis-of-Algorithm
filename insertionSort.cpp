#include <iostream>
using namespace std;
void insertionSort(int A[],int n);
void printSorted(int arr[],int len);
int main()
{
    int a[]={14,5,1,2,6};
    //int l = sizeof(a)/sizeof(*a);
    int l = 5;
    insertionSort(a,l);
    printSorted(a,l);
}
void insertionSort(int A[],int n) {
    int i,j,key;
    for(i = 1;i<n;i++)
    {
        key = A[i];
        j = i-1;
        while(j>-1 && A[j]>key)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}
void printSorted(int arr[],int len)
{
    for(int j=0;j<len;j++)
    {
        cout << arr[j] << " ";
    }
}
