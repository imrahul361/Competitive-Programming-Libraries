#include <bits/stdc++.h>
using namespace std;

int Partition(int *a, int s, int e)
{
    int j = s;
    int i = s - 1;
    int pivot = a[e];

    while (j < e)
    {
        if (a[j] <= pivot)
        {
            i++;
            swap(a[i], a[j]);
        }
        j++;
    }

    swap(a[i + 1], a[e]);

    return (i + 1);
}

void quick_sort(int a[], int s, int e)
{
    if (s >= e)
        return;

    int p = Partition(a, s, e);
    quick_sort(a, s, p - 1);
    quick_sort(a, p + 1, e);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}