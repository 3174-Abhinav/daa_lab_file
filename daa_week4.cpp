//QUES 1
/*#include <iostream>
using namespace std;
void merge(int arr[], int p, int q, int r, int &comp, int &shift)
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

    while (i < n1 && j < n2 && ++comp)
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
        ++shift;
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
        ++shift;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
        ++shift;
    }
}

void mergeSort(int arr[], int l, int r, int &comp, int &shift)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, comp, shift);
        mergeSort(arr, m + 1, r, comp, shift);
        merge(arr, l, m, r, comp, shift);
    }
}

int main()
{
    int t, comp = 0, shift = 0;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        mergeSort(arr, 0, size - 1, comp, shift);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "\ncomparisons =" << comp;
        cout << "\nshifts = " << shift << endl;
    }
    return 0;
}
*/
//QUES 2

/*#include <iostream> 
using namespace std;
void input(int *a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
}
int partition(int *, int, int, int &, int &);
void quick_sort(int *a, int p, int r, int &compare, int &swaps)
{
    int q;
    if (p < r)
    {
        q = partition(a, p, r, compare, swaps);
        quick_sort(a, p, q - 1, compare, swaps);
        quick_sort(a, q + 1, r, compare, swaps);
    }
}
int partition(int *a, int p, int r, int &compare, int &swaps)
{
    int temp;
    int i = p - 1;
    for (int j = p; j < r; ++j)
    {
        ++compare;
        if (a[j] <= a[r])
        {
            ++swaps;
            ++i;
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    ++swaps;
    temp = a[++i];
    a[i] = a[r];
    a[r] = temp;
    return i;
}
int main()
{
    int size, cases;
    int compare = 0, swaps = 0;
    cin >> cases;
    for (int i = 0; i < cases; ++i)
    {
        cin >> size;
        int *arr = new int[size];
        input(arr, size);
        quick_sort(arr, 0, size - 1, compare, swaps);
        for (int i = 0; i < size; ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl
             << "Comparisons = " << compare << endl
             << "Swaps = " << swaps << endl;
        delete (arr);
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

void printArray(int arr[], int size, int key)
{
    if (key > size)
    {
        cout << "Not present \n";
        return;
    }
    else
    {
        cout << arr[key - 1]<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size, key;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        cin >> key;
        mergeSort(arr, 0, size - 1);
        printArray(arr, size, key);
    }
    return 0;
}
*/
