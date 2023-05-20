#include <bits/stdc++.h>
using namespace std;

int N;
vector<long long> arr;
long long res;

void progress()
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N - 1; i++)
    {
        res += (upper_bound(arr.begin(), arr.end(), arr[i] / 9 * 10) - arr.begin() - (i + 1));
    }
}
void input()
{
    int temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp * 9);
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