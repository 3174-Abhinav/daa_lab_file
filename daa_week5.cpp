//QUES 1
/*#include <iostream>
using namespace std;

void countSort(int array[], int size)
{
    int output[size];
    int max = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    int count[max];
    int result=0,m;
    for (int i = 0; i <= max; ++i)
    {
        count[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        count[array[i]]++;
          if (m < count[array[i]]) {
            m = count[array[i]];
            result = array[i];
            cout<<result;
        }
    }

    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--)
    {
        output[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = output[i];
    }
    if(m>2)
    {
        cout<<char(result)<<" - "<<m<<endl;
    }
    else  cout<<"Not Duplicate";
    
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char string[n];
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> string[i];
        }
        for (int i = 0; i < n; i++)
        {
            array[i] = string[i];
        }
        countSort(array, n);
    }
    return 0;
}
*/
//QUES 2
/*#include <bits/stdc++.h>
using namespace std;
void search(int a[], int n, int item)
{
    int mid, result = -1, low = 0, high = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (item == a[mid] + a[i])
            {
                cout << a[i] << " " << a[mid] << " " << a[mid] + a[i];
                return;
            }
            else if (a[mid] + a[low] > item)
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
    cout << "No Such Element Exist\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> key;
        sort(a, a + n);
        search(a, n, key);
    }
}
*/
//QUES 3
#include<bits/stdc++.h>
using namespace std;
void check(int a[], int n, int a1[],int m)
{
 int i=0,j=0;
 while(i<n && j< m)
 {
  if(a[i]<a1[j]) i++;
  else if(a[i]>a1[j]) j++;
  else {
    cout<<a[i]<< " ";
    i++;
    j++;
    }
 }
}
int main()
{
 int i,n,m;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
    cin>>a[i];
 cin>>m;
 int a1[m];
 for(i=0;i<m;i++)
    cin>>a1[i];
 sort(a,a+n);
 sort(a1,a1+m);
 check(a,n,a1,m);
return 0;
}
