/*QUES 1*/
/*#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, element;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> element;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == element)
            {
                cout << "\nPresent " << (i+1)<<"\n";
                break;
            }
        }
    }
    return 0;
}*/
//QUES 2
/*#include <iostream>
using namespace std;
void binary_search(int a[], int n, int item)
{
    int l = 0;
    int r = n - 1;
    int comp = 0;
    while (l < r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == item && ++comp)
        {
            cout << "Present " << comp << "\n";
            return ;
        }
        if (a[m] < item )
            l = m + 1;
        else if (a[m] > item)
            r = m - 1;
    }
    cout << "Not Present " << comp << "\n";
    return ;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, item;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> item;
        binary_search(a, n, item);
    }
    return 0;
}*/
//QUES 3
/*
#include <iostream>
#include <cmath>
using namespace std;
void jump_search(int a[], int n, int item)
{
    int m = 0;
    int comp = 0;
    int end = sqrt(n);
    while (a[end] <= item && end < n && ++comp)
    {
        m = end;
        end += sqrt(n);
        if (end > n - 1)
            end = n;
    }
    for (int i = m; i < end; i++)
    {
        if (a[i] == item && ++comp)
        {
            cout << "Present " << comp << "\n";
            return;
        }
    }
    cout << "Not Present" << comp+1 << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int item, a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> item;
        jump_search(a, n, item);
    }
    return 0;
}
*/
