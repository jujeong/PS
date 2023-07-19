#include <bits/stdc++.h>
using namespace std;

int N, res;
vector<pair<int, int>> arr;
priority_queue<int, vector<int>, greater<int>> resClass;

void progress()
{
    resClass.push(arr[0].second);
    for (int i = 1; i < N; i++)
    {
        resClass.push(arr[i].second);
        if (resClass.top() <= arr[i].first)
        {
            resClass.pop();
        }
    }
    res = int(resClass.size());
}
void input()
{
    int t1, t2;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t1 >> t2;
        arr.push_back(make_pair(t1, t2));
    }
    sort(arr.begin(), arr.end());
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