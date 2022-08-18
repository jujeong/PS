#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1000001];
void progress()
{
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        arr[i] = arr[i - 1] + 1;
        if (i % 2 == 0)
        {
            arr[i] = min(arr[i], arr[i / 2] + 1);
        }
        if (i % 3 == 0)
        {
            arr[i] = min(arr[i], arr[i / 3] + 1);
        }
        //cout << "arr[" << i << "] = " << arr[i] << "\n";
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