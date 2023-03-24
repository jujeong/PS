#include <bits/stdc++.h>
using namespace std;

int N;
int arr[10001];
int res[10001];

void progress()
{
    res[1] = arr[1];
    res[2] = arr[2] + arr[1];
    for (int i = 3; i <= N; i++)
    {
        res[i] = max(res[i - 1], max(arr[i] + arr[i - 1] + res[i - 3], arr[i] + res[i - 2]));
        //cout << res[i] << "\n";
    }
}
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
    cout << res[N];
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