#include <bits/stdc++.h>
using namespace std;

int N;
vector<bool> arr;
int t_res, f_res;
int t, f;

void input()
{
    int temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (temp % 2)
        {
            arr.push_back(true);
            t_res += i - t;
            t++;
        }
        else
        {
            arr.push_back(false);
            f_res += i - f;
            f++;
        }
    }
}

void output()
{
    cout << min(t_res, f_res);
}

void progress()
{
    
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