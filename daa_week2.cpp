//QUES 1
/*#include <iostream>
using namespace std;
int binary_search(int a[], int n, int item, int x)
{
    int mid, result = -1, low = 0, high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (item == a[mid])
        {
            result = mid;
            if (x)
                high = mid - 1;
            else
                low = mid + 1;
        }
        else if (a[mid] > item)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], item, last, count, front;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> item;
        last = binary_search(a, n, item, 0);
        front = binary_search(a, n, item, 1);
        count = (last - front) + 1;
        if (count < 0)
            cout << "Key not Present\n";
        else
            cout << item << " - " << count << "\n";
    }
    return 0;
}
*/
//QUES 2
/*#include<iostream>
using namespace std;
void check(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if((a[i]+a[j])==a[k])
                {
                    cout<<i+1<<","<<j+1<<","<<k+1<<"\n";
                    return ;
                }
            }
        }
    }
    cout<<"NO SEQUENCE FOUND \n";
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
          cin>>a[i];
        check(a,n);
    }
}
*/
//QUES 3
/*#include<iostream>
#include<cmath>
using namespace std;
void search(int a[],int n,int key)
{
  int i,j,count =0;
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(abs((a[i]-a[j]))==key)
          {
              ++count;
          }
      }
  }
  cout<<count<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int key,n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>key;
        search(a,n,key);
    }
    return 0;
}
*/