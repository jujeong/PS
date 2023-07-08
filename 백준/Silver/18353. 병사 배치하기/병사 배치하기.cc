#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> arr;
int dp[2000] = { 1, };
int res;
void progress()
{
    reverse(arr.begin(), arr.end());
    fill_n(dp, N, 1);
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (res < dp[i])
        {
            res = dp[i];
        }
    }
    res = N - res;
}

void input()
{
    int temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp; arr.push_back(temp);
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