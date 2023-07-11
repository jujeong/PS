#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> color;
vector<vector<long long>> pos(2001);
long long res;

void progress()
{
    for (int i = 0; i < int(color.size()); i++)
    {
        sort(pos[i].begin(), pos[i].end());
    }
    for (int i = 0; i < int(color.size()); i++)
    {
        if (int(pos[i].size()) > 1)
        {
            for (int j = 0; j < int(pos[i].size()); j++)
            {
                if (j == 0)
                {
                    res += pos[i][j + 1] - pos[i][j];
                }
                else if(j == int(pos[i].size()) - 1)
                {
                    res += pos[i][j] - pos[i][j - 1];
                }
                else
                {
                    res += min(pos[i][j + 1] - pos[i][j], pos[i][j] - pos[i][j - 1]);
                }
            }
        }
    }
}
void input()
{
    int t1, t2;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t1 >> t2;
        color.push_back(t2);
        pos[t2].push_back(t1);
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