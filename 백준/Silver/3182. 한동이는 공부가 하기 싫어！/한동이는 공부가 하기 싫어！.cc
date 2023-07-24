#include <bits/stdc++.h>
using namespace std;

bool arr[1001][1001];
int val[1001];
int n, res;

void progress()
{
    int temp, at, top = 0;
    for (int i = 1; i <= n; i++)
    {
        arr[i][i] = true;
        temp = 1;
        at = val[i];
        while (arr[at][i] == false)
        {
            //cout << "at : " << at << "\n";
            arr[at][i] = true;
            at = val[at];
            temp++;
        }
        //cout << temp << "\n";
        if (temp > top)
        {
            res = i;
            top = temp;
        }
    }
}
void input()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> val[i];
    }
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