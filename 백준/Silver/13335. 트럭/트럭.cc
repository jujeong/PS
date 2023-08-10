#include <bits/stdc++.h>
using namespace std;

int N, W, L;
int res;
queue<int> arr;
int currentWeight;
int bridge[100];

void input()
{
    int temp;
    cin >> N >> W >> L;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push(temp);
    }
}

void output()
{
    cout << res;
}

void progress()
{
    while (!arr.empty())
    {
        currentWeight -= bridge[0];
        for (int i = 1; i < W; i++)
        {
            bridge[i - 1] = bridge[i];
        }
        if (currentWeight + arr.front() <= L)
        {
            currentWeight += arr.front();
            bridge[W - 1] = arr.front();
            arr.pop();
        }
        else
        {
            bridge[W - 1] = 0;
        }
        /*cout << "on bridge : ";
        for (int i = 0; i < W; i++)
        {
            cout << bridge[i] << " ";
        }
        cout << "\n";*/
        res++;
    }
    res += W;
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