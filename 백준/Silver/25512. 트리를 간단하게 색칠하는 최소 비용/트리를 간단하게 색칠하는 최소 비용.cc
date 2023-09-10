#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> arr;
vector<pair<int, int>> val;
long long res1, res2;

void trace(int v, bool r)
{
    if (!r)
    {
        res1 += val[v].first;
        res2 += val[v].second;
    }
    else
    {
        res1 += val[v].second;
        res2 += val[v].first;
    }
    for (int i = 0; i < int(arr[v].size()); i++)
    {
        trace(arr[v][i], !r);
    }
}

void input()
{
    cin >> N;
    arr.resize(N);
    int t1, t2;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> t1 >> t2;
        arr[t1].push_back(t2);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> t1 >> t2;
        val.push_back(make_pair(t1, t2));
    }
    trace(0, 0);
}

void output()
{
    cout << min(res1, res2);
}

void progress()
{
    
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