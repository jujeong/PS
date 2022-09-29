#include <bits/stdc++.h>
using namespace std;

int n, m;
long long arr[1002][1002];

void progress()
{
    arr[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1)
            {
                continue;
            }
            arr[i][j] = (arr[i - 1][j] + arr[i][j - 1] + arr[i - 1][j - 1]) % 1000000007;
        }
    }
}
void input()
{
    cin >> n >> m;
}
void output()
{
    cout << arr[n][m];
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