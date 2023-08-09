#include <bits/stdc++.h>
using namespace std;

string s;
int arr[10];
int res;

void progress()
{
    int temp;
    for (int i = 0; i < int(s.size()); i++)
    {
        arr[s[i] - '0']++;
    }
    temp = arr[6] + arr[9];
    arr[6] = temp / 2;
    arr[9] = temp - arr[6];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > res)
        {
            res = arr[i];
        }
    }
}
void input()
{
    cin >> s;
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