#include <bits/stdc++.h>
using namespace std;

int T, N;
vector<int> res;
vector<int> arr;
void input()
{
    
}

void output()
{
    for (int i = 0; i < T; i++)
    {
        cout << res[i] << "\n";
    }
}

void progress()
{
    int temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    temp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                temp++;
            }
        }
    }
    res.push_back(temp);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        arr.clear();
        input();
        progress();
    }
    output();
}