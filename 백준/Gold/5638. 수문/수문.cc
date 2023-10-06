#include <bits/stdc++.h>
using namespace std;

int N, M;
int V, T;
bool cache[20];
int D;
vector<pair<int, int>> arr;
vector<pair<int, int>> val;
int V1, V2;

void eV(int c, int p)
{
    if (c == D)
    {
        val.push_back(make_pair(V1, V2));
        return;
    }
    for (int i = p; i < N; i++)
    {
        V1 += arr[i].first;
        V2 += arr[i].second;
        eV(c + 1, i + 1);
        V1 -= arr[i].first;
        V2 -= arr[i].second;
    }
}

void input()
{
    int t1, t2;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t1 >> t2;
        arr.push_back(make_pair(t2, t1));
    }
    for (int i = 1; i <= N; i++)
    {
        V1 = 0, V2 = 0;
        D = i;
        eV(0, 0);
    }
    sort(val.begin(), val.end());
    //for (int i = 0; i < int(val.size()); i++)
    //{
    //    cout << "! : " << val[i].first << " " << val[i].second << "\n";
    //}
}

void output()
{
    for (int i = 0; i < int(val.size()); i++)
    {
        if (val[i].second * T > V)
        {
            cout << val[i].first << "\n";
            return;
        }
    }
    cout << "IMPOSSIBLE\n";
}

void progress()
{
    cin >> V >> T;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    cin >> M;
    for (int i = 1; i <= M; i++)
    {
        progress();
        cout << "Case " << i << ": ";
        output();
    }
}