#include <bits/stdc++.h>
using namespace std;

int res, c;
int n, x;
int arr[250000];

void progress()
{
    int temp = 0;
    for (int i = 0; i < x; i++)
    {
        temp += arr[i];
    }
    res = temp;
    c = 1;
    for (int i = 0; i < n - x; i++)
    {
        temp -= arr[i];
        temp += arr[i + x];

        if (temp > res)
        {
            res = temp;
            c = 1;
        }
        else if (temp == res)
        {
            c++;
        }
        //cout << "i : " << i << ", temp : " << temp << ",c : " << c << "\n";
    }
}

void input()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void output()
{
    if (res == 0)
    {
        cout << "SAD";
    }
    else
    {
        cout << res << "\n" << c;
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