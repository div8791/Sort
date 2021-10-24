// resultant array will form a wave like a[0]>=a[1]<=a[2]>=a[3] and so on...
// loop from i=1 to n with +2 updation
// if a[i]>a[i-1] then swap a[i] and a[i-1]
// and if a[i]>a[i+1] and i<=n-2 then swap a[i] and a[i+1]
#include <bits/stdc++.h>
using namespace std;
void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void wavesort(int a[], int n)
{
    for (int i = 1; i < n; i = i + 2)
    {
        if (a[i] > a[i - 1])
        {
            swap(a, i, i - 1);
        }
        if (a[i] > a[i + 1] && i <= n - 2)
        {
            swap(a, i, i + 1);
        }
    }
}
signed main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    wavesort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}