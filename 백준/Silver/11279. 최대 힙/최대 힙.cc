#include <bits/stdc++.h>
using namespace std;

int N;
priority_queue<int, vector<int>, less<int>> arr;
vector<int> res;

void progress()
{
    
}
void input()
{
    int t;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        if (t == 0)
        {
            if (arr.empty())
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(arr.top());
                arr.pop();
            }
        }
        else
        {
            arr.push(t);
        }
    }
}
void output()
{
    for (int i = 0; i < int(res.size()); i++)
    {
        cout << res[i] << "\n";
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