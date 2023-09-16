#include <bits/stdc++.h>
using namespace std;

int N, K;
int arr[10001];
int D[10001];
void process()
{
    int temp[10001];
    copy(begin(arr), end(arr), begin(temp));
    for (int i = 1; i <= N; i++)
    {
        arr[D[i]] = temp[i];
    }
}

void input()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= N; i++)
    {
        cin >> D[i];
    }
}

void output()
{
    for (int i = 1; i <= N; i++)
    {
        cout << arr[i] << " ";
    }
}

void progress()
{
    for (int i = 0; i < K; i++)
    {
        process();
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