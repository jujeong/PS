#include <bits/stdc++.h>
using namespace std;

int n, q;
int arr[300001];
int sum[300001];
vector<int> res;

void progress()
{
    int t1, t2;
    for (int i = 0; i < q; i++)
    {
        cin >> t1 >> t2;
        res.push_back(sum[t2] - sum[t1 - 1]);
    }
}

void input()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    sort(arr + 1, arr + n + 1);
    sum[1] = arr[1];
    for (int i = 2; i <= n; i++)
    {
        sum[i] = arr[i] + sum[i - 1];
    }
}

void output()
{
    for (int i = 0; i < q; i++)
    {
        cout << res[i] << "\n";
    }
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