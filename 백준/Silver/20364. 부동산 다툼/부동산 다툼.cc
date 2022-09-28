#include <bits/stdc++.h>
using namespace std;

long long n, q;
vector<long long> arr;
vector<long long> res;
set<long long> s;
void progress()
{
    int temp;
    bool flag = false;
    for (int i = 0; i < q; i++)
    {
        temp = arr[i];
        flag = false;
        vector<long long> path;
        while (temp >= 2)
        {
            path.push_back(temp);
            temp /= 2;
            
        }
        reverse(path.begin(), path.end());
        for (int j = 0; j < int(path.size()); j++)
        {
            //cout << "path : " << path[j] << " ";
            if (s.find(path[j]) != s.end())
            {
                //cout << "in : " << path[j] << "\n";
                res.push_back(path[j]);
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            flag = false;
            continue;
        }
        //cout << "\n";
        s.insert(arr[i]);
        res.push_back(0);
        //cout << "in : " << 0 << "\n";
    }
}
void input()
{
    int temp;
    cin >> n >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
}
void output()
{
    for (int i = 0; i < q; i++)
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