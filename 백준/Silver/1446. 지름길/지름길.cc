#include <bits/stdc++.h>
using namespace std;

int N, D;
int arr[10001];
int dist[10001];

struct shortCut {
    int s, f, l;
}st[12];

bool compare(shortCut st1, shortCut st2)
{
    return st1.f < st2.f;
}

void input()
{
    cin >> N >> D;
    for (int i = 1; i <= D; i++)
    {
        arr[i] = i;
    }
}

void output()
{
    cout << arr[D];
}

void progress()
{
    int s, f, l;
    for (int i = 0; i < N; i++)
    {
        cin >> s >> f >> l;
        st[i].s = s;
        st[i].f = f;
        st[i].l = l;
    }
    sort(st, st + N, compare);
    for (int i = 0; i < N; i++)
    {
        s = st[i].s;
        f = st[i].f;
        l = st[i].l;
        for (int j = 1; j <= D; j++)
        {
            if (j == f && f - s > l)
            {
                arr[j] = min(arr[j], min(arr[j - 1] + 1, arr[s] + l));
            }
            else
            {
                arr[j] = min(arr[j], arr[j - 1] + 1);
            }
        }
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