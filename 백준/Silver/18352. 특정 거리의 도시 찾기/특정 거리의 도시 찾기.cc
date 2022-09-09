#include <bits/stdc++.h>
using namespace std;

int n, m, k, x;
int res;
int arr[300001];
vector<int> val[300001];

void progress(int x)
{
    arr[x] = 0;
    queue<int> q;
    q.push(x);
    while (!q.empty()) {
        int c = q.front();
        q.pop();
        for (int i = 0; i < val[c].size(); i++)
        {
            int next = val[c][i];
            if (arr[next] > arr[c] + 1)
            {
                arr[next] = arr[c] + 1;
                q.push(next);
            }
        }
    }
    bool f = false;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == k)
        {
            f = true;
            cout << i << "\n";
        }
    }
    if (!f)
    {
        cout << -1 << "\n";
    }
}



void input()
{
    int t1, t2;
    cin >> n >> m >> k >> x;
    for (int i = 1; i <= n; i++)
    {
        arr[i] = INT_MAX;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t1 >> t2;
        val[t1].push_back(t2);
    }
}

void output()
{
    //cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress(x);
    output();
}