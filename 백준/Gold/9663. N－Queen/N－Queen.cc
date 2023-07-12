#include <bits/stdc++.h>
using namespace std;

int res = 0;

bool check(int arr[], int x)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == arr[x] || abs(arr[x] - arr[i]) == x - i)
        {
            return false;
        }
    }
    return true;
}

void queen(int arr[], int n, int x)
{
    if (x == n)
    {
        res++;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr[x] = i;
            if (check(arr, x))
            {
                queen(arr, n, x + 1);
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[16] = { 0, };
    int n; cin >> n;
    queen(arr, n, 0);
    cout << res;
}