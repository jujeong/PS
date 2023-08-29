#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> arr;
vector<int> res;

void input()
{
    int temp;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
}

void output()
{
    for (int i = 0; i < M; i++)
    {
        cout << res[i] << "\n";
    }
}

void progress()
{
    int temp, tempRes;
    int low, mid, high;
    bool checked;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < M; i++)
    {
        low = 0;
        high = N - 1;
        checked = false;
        cin >> temp;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (arr[mid] == temp)
            {
                checked = true;
            }
            if (arr[mid] < temp)
            {
                low = mid + 1;
            }
            else
            {
                tempRes = mid;
                high = mid - 1;
            }
        }
        if (checked)
        {
            res.push_back(tempRes);
        }
        else
        {
            res.push_back(-1);
        }
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