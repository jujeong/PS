#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& val1, const pair<int, int>& val2)
{
    if (val1.second == val2.second)
    {
        return val1.first < val2.first;
    }
    else
    {
        return val1.second > val2.second;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int temp;
    int total = 0;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
        total += temp;
    }
    sort(arr.begin(), arr.end());
    vector<pair<int, int>> val;

    for (int i = 0; i < n; i++)
    {
        if (val.empty())
        {
            val.push_back(pair<int, int>(arr[i], 1));
            continue;
        }
        if (val.back().first == arr[i])
        {
            pair<int, int> rev = val.back();
            rev.second++;
            val.pop_back();
            val.push_back(rev);
        }
        else
        {
            val.push_back(pair<int, int>(arr[i], 1));
        }
    }
    
    sort(val.begin(), val.end(), compare);
    
    if (int(val.size()) > 1 && (val[0].second == val[1].second))
    {
        temp = val[1].first;
    }
    else
    {
        temp = val[0].first;
    }
    cout << floor(double(total) / double(n) + 0.5) << "\n"; // 산술평균
    cout << arr[n / 2] << "\n"; // 중앙값
    cout << temp << "\n"; // 최빈값
    cout << arr.back() - arr.front(); // 범위
}