#include <bits/stdc++.h>
using namespace std;

int u, d, n, res;
int arr[100000];
void progress()
{
    bool asc = false;
    bool des = false;
    res = 1;
    u = 1;
    d = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            u++;
            res = max(res, u);
        }
        else
        {
            
            u = 1;
        }
        if (arr[i] <= arr[i - 1])
        {
            d++;
            res = max(res, d);
        }
        else
        {
            
            d = 1;
        }
    }
}
void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void output()
{
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}