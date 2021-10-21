/*
1) Find maximum in array.
2) Make an array of maximum+1 size say count array
3) Start traversing the given array, and increment the count array on the index equal to element of given array by +1,
   i.e., if arr[0] = 3, then count[3] = 1, if get again then 1++.
4) Start tarversing the count array and if count[j]==0 then check next, and if not zero the store the index
   of that position in a new array until the element becomes zero.
   the new array will be sorted.   
*/
#include<bits/stdc++.h>
void countsort(int *a, int n)
{
    int k = a[0];
    for(int i=0; i<n; i++)
    {
        k = fmax(k, a[i]);
    }
    int *count = new int(k+1);
    for(int i=0; i<k+1; i++)
    {
        count[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        count[a[i]]++;
    }
    int i=0, j=0;
    while(i<=k)
    {
        if(count[i]>0)
        {
            a[j] = i;
            count[i]--;
            j++;
        }
        else
        {
            i++;
        }
    }
}
using namespace std;
signed main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    countsort(a,n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}