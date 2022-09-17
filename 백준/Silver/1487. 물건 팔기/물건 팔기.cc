#include <bits/stdc++.h>
using namespace std;

int n;
int res;
vector<pair<int, int>> arr;

void progress()
{
    int pc;
    int val = 0;
    for (int i = 0; i < n; i++)
    {
        pc = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i].first > arr[j].second)
            {
                pc += arr[i].first - arr[j].second;
            }
        }
        if (val < pc)
        {
            val = pc;
            res = arr[i].first;
        }
    }
}



void input()
{
    int t1, t2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t1 >> t2;
        arr.push_back(pair<int, int>(t1, t2));
    }
    sort(arr.begin(), arr.end());
}

void output()
{
    /*for (int i = 0; i < n; i++)
    {
        cout << arr[i].first << " " << arr[i].second << "\n";
    }*/
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