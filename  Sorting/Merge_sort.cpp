#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int s, int e)
{
    int i = s, k = s, mid = s + (e - s) / 2, j = mid + 1, temp[100];
    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= mid)
        temp[k++] = a[i++];
    while (j <= e)
        temp[k++] = a[j++];

    for (int i = s; i <= e; i++)
        a[i] = temp[i];
}

void merge_sort(int a[], int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2; //Same as (s+e)/2, but avoids overflow for large l and h

    merge_sort(a, s, mid);
    merge_sort(a, mid + 1, e);

    merge(a, s, e);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}