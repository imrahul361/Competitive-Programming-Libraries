#include <bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int min_index = i;

        for (int j = i; j <= n - 1; j++)
            if (a[j] < a[min_index])
                min_index = j;

        swap(a[i], a[min_index]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}