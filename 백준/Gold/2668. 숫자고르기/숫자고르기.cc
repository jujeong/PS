#include <bits/stdc++.h>
using namespace std;

int N;
int arr[101];
bool cache[101];
set<int> res;
bool cycle;

void input()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
}

void output()
{
    cout << int(res.size()) << "\n";
    for (auto i = res.begin(); i != res.end(); i++)
    {
        cout << (*i) << "\n";
    }
}

void progress(int f, int p)
{
    if(cache[p])
    {
        if (f == p)
        {
            cycle = true;
            res.insert(p);
        }
        return;
    }
    cache[p] = true;
    progress(f, arr[p]);
    if (cycle)
    {
        res.insert(arr[p]);
        res.insert(p);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    for (int i = 1; i <= N; i++)
    {
        cache[i] = true;
        progress(i, arr[i]);
        cycle = false;
        memset(cache, false, sizeof(cache));
    }
    output();
}