#include <bits/stdc++.h>
using namespace std;

int N, res;
set<string> arr;

void progress()
{
    res += arr.size();
}
void input()
{
    string s;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        if (s == "ENTER")
        {
            res += arr.size();
            arr.clear();
            
        }
        else
        {
            arr.insert(s);
        }
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