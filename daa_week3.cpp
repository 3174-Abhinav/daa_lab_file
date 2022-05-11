//QUES 1
/*#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
int comp=0,shift=0;
int k,i,j;
for(i=1;i<n;i++)
{
    k=a[i];
    j=i+1;
    while(j>0 && a[j]>k && ++comp)
    {
        a[j+1]=a[j];
        j-=1;
        ++shift;
    }
    a[j+1]=k;
}
cout<<comp<<" "<<shift<<"\n";

}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      insertion_sort(a,n);
  }
  return 0;
}
*/
//QUES 3
/*#include <iostream>
using namespace std;
void merge(int arr[], int p, int q, int r)
{

    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    int i, j, k;
    i = 0;
    j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] <= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        mergeSort(arr, 0, size - 1);
        printArray(arr, size);
    }
    return 0;
}*/