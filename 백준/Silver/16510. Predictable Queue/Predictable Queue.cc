#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[200001];
vector<int> res;
void input()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
}

void output()
{
    for (int i = 0; i < M; i++)
    {
        cout << res[i] << "\n";;
    }
}

void progress()
{
    int temp;
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        res.push_back(upper_bound(arr, arr + N + 1, temp) - arr - 1);
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