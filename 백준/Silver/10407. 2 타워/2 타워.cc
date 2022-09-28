#include <bits/stdc++.h>
using namespace std;

int h;
int res;

void progress()
{
    switch (h)
    {
    case 1:
        res = 2;
        break;
    default:
        res = 1;
        break;
    }
}
void input()
{
    cin >> h;
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