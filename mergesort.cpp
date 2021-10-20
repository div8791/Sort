#include <bits/stdc++.h>
using namespace std;
void mergeboth(int a[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int temp1[n1];
    int temp2[n2];
    for (int i = 0; i < n1; i++)
    {
        temp1[i] = a[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        temp2[i] = a[mid + 1 + i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (temp1[i] <= temp2[j])
        {
            a[k] = temp1[i];

            i++;
            k++;
        }
        else
        {
            a[k] = temp2[j];

            j++;
            k++;
        }
    }
    while (i < n1)
    {
        a[k] = temp1[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        a[k] = temp2[j];
        j++;
        k++;
    }
}
void merges(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        merges(a, l, mid);
        merges(a, mid + 1, r);
        mergeboth(a, l, mid, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    merges(a, 0, n-1);
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}