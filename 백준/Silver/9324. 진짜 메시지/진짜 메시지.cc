#include <bits/stdc++.h>
using namespace std;

int T;
int arr[26];
string s;
bool res;

void input()
{
    cin >> s;
}

void output()
{
    if (res)
    {
        cout << "OK\n";
    }
    else
    {
        cout << "FAKE\n";
    }
}

void progress()
{
    int v;
    for (int i = 0; i < int(s.size()); i++)
    {
        v = int(s[i] - 'A');
        arr[v]++;
        if (!(arr[v] % 3))
        {
            i++;
            if (arr[s[i] - 'A'] != arr[v])
            {
                res = false;
                return;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        memset(arr, 0, sizeof(arr));
        res = true;
        input();
        progress();
        output();
    }
}