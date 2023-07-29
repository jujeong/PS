#include <bits/stdc++.h>
using namespace std;

int N;
vector<double> arr;
double res;

void progress()
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N - 1; i++)
    {
        res += arr[i] / 2;
    }
    res += arr[N - 1];
}

void input()
{
    double temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
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