#include <bits/stdc++.h>
using namespace std;

int N, T, G;
int res = INT_MAX;
bool visited[100000];
void progress()
{
    int c = 0, x = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(N, 0));
    while (!q.empty())
    {
        x = q.front().first;
        c = q.front().second;
        q.pop();
        if (visited[x])
        {
            continue;
        }
        visited[x] = true;
        if (c > T)
        {
            return;
        }
        if (x == G)
        {
            res = c;
            return;
        }
        if (x < 99999)
        {
            q.push(make_pair(x + 1, c + 1));
        }
        if (x > 1 && x < 50000)
        {
            int pv = x * 2, pc = -1;
            while (pv > 0)
            {
                pv /= 10;
                pc++;
            }
            q.push(make_pair((x * 2 - pow(10, pc)), c + 1));
        }
    }
}

void input()
{
    cin >> N >> T >> G;
}

void output()
{
    if (res == INT_MAX)
    {
        cout << "ANG";
    }
    else
    {
        cout << res;
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