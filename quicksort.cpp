#include<bits/stdc++.h>
using namespace std;
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
int partition(int a[], int l, int h)
{
    int pivot = a[h];
    int i = l-1;
    for(int j=l; j<h; j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a, i, j);
        }
    }
    swap(a, i+1, h);
    return (i+1);
}
void quicksort(int a[], int l, int h)
{
    if(l<h)
    {
        int pi = partition(a, l, h);
        quicksort(a, l, pi-1);
        quicksort(a, pi+1, h);
    }
}
signed main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    quicksort(a, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}