#include <bits/stdc++.h>
using namespace std;

int N;
int arr[63];
long long res;

void input()
{
    long long temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (temp)
        {
            arr[int(log2(temp))]++;
        }
    }
    
}

void output()
{
    int i = 63;
    while (!arr[--i]) {}
    res = (long long)pow(2, i);
    cout << res;
}

void progress()
{
    for (int i = 0; i < 63; i++)
    {
        arr[i + 1] += arr[i] / 2;
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