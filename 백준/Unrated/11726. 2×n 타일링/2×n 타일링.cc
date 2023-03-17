#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1001];
void progress()
{
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        arr[i] = (arr[i - 1] + arr[i - 2]) % 10007;
    }
}
void input()
{
    cin >> n;
}
void output()
{
    cout << arr[n];
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