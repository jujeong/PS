#include <bits/stdc++.h>
using namespace std;

int R, G, n;

int gcd(int x, int y)
{
    x < y ? swap(x, y) : void();
    while (y != 0)
    {
        n = x % y;
        x = y;
        y = n;
    }
    return x;
}

void progress()
{
    n = gcd(R, G);
}
void input()
{
    cin >> R >> G;
}
void output()
{
    int v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v = n / i;
            cout << i << " " << R / i << " " << G / i << "\n";
            if (i != v)
            {
                cout << v << " " << R / v << " " << G / v << "\n";

            }
        }
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