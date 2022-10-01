#include <bits/stdc++.h>
using namespace std;

int res, n;
vector<int> arr;

void progress()
{
    int c = 0;
    int pv = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (flag == false)
        {
            pv = arr[i];
            flag = true;
        }
        c++;
        if (c == pv || i == n - 1)
        {
            res++;
            c = 0;
            flag = false;
        }
    }
}
void input()
{
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
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