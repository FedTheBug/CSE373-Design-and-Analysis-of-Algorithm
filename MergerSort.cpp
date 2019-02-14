#include <iostream>
#include <cstdlib>
using namespace std;
void Merge (int *A, int *L, int leftNumber, int *R, int rightNumber) // This function will merge left and right subarray into the array A
{
    int i, j, k;
    i = 0; j = 0; k = 0;
    while (i < leftNumber && j < rightNumber)
    {
        if (L[i] < R[j])
        {
            A[k] = L[i];
            k++;
            i++;
        }

        else {
            A[k] = R[j];
            k++;
            j++;
        }

    }
    while (i < leftNumber)
    {
        A[k] = L[i];
        k++;i++;
    }

    while (j < rightNumber){
        A[k] = R[j];
        k++;j++;
    }

}
void MergeSort(int *A,int n) //This function will sort the array in a recursive manner
{
    int mid , *L, *R;
    int i;
    if (n<2) return;
    mid  = n/2;
    L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n- mid)*sizeof(int));
    for (i = 0; i <mid ; i++)
    {
        L[i] = A[i];
    }
    for (i = mid ; i< n;i++)
    {
        R[i-mid] = A[i];
    }
    MergeSort(L,mid);
    MergeSort(R,n-mid);
    Merge(A,L,mid,R,n-mid);
    free (R);
    free(L);
}
int main()
{
    int A[] = {90,87,52,48,100,45,85,102,85};
    int i,num;
    num = sizeof(A)/sizeof(*A);
    MergeSort(A,num);
    for(i = 0;i < num;i++)
        cout << A[i] << " ";
	return 0;
}
