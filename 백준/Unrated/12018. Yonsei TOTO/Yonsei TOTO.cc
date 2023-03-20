#include <bits/stdc++.h>
using namespace std;

int n, m, res;
int arr[100];
vector<int> val;
void progress()
{
    int t, v;
    for (int i = 0; i < n; i++)
    {
        //cout << "i : " << i << "\n";
        cin >> t >> v;
        for (int j = 0; j < t; j++)
        {
            cin >> arr[j];
        }
        if (t < v)
        {
            val.push_back(1);
        }
        else
        {
            sort(arr, arr + t);
            val.push_back(arr[t - v]);
        }
    }
    sort(val.begin(), val.end());
    for (int i = 0; i < n; i++)
    {
        if (m >= val[i])
        {
            //cout << val[i] << "\n";
            m -= val[i];
            res++;
        }
        else
        {
            break;
        }
    }
}
void input()
{
    cin >> n >> m;
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