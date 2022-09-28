#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

int progress(string str)
{
    int cnt;
    queue<pair<string, int>> q;
    q.push({ s, 0 });
    map<string, bool> visited;
    string target = s, temp;
    sort(target.begin(), target.end());

    while (!q.empty())
    {
        string cur = q.front().first;
        cnt = q.front().second;
        q.pop();
        if (cur == target)
        {
            return cnt;
        }
        if (!visited.count(cur))
        {
            visited[cur] = true;
            for (int j = 0; j <= n - k; j++)
            {
                temp = cur.substr(j, k);
                reverse(temp.begin(), temp.end());
                q.push({ cur.substr(0, j) + temp + cur.substr(j + k, cur.size()), cnt + 1 });
            }
        }
    }
    return -1;
}
void input()
{
    char c;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        s += c;
    }
}
void output()
{

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    cout << progress(s);
    output();
}