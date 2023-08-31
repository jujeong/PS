#include <bits/stdc++.h>
using namespace std;

int N;
long long dp[100001];

void input()
{
    cin >> N;
}

void output()
{
    cout << dp[N] << "\n";
}

void progress()
{
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 2;
    dp[4] = 3;
    dp[5] = 3;
    dp[6] = 6;
    for (int i = 7; i < 100001; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 4] + dp[i - 6];
        dp[i] %= 1000000009;
    }

    int T;
    cin >> T;
    
    while (T--)
    {
        input();
        progress();
        output();
    }
}