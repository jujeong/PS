#include <bits/stdc++.h>
using namespace std;

int T;
string s, p;
int arrS[26], arrP[26];
bool res;

bool comp()
{
    for (int i = 0; i < 26; i++)
    {
        if (arrS[i] != arrP[i])
        {
            return false;
        }
    }
    return true;
}

void input()
{
    cin >> s >> p;
}

void output()
{
    if (res)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

void progress()
{
    int l = int(p.size());
    for (int i = 0; i < l; i++)
    {
        arrP[(int)(p[i] - 'a')]++;
        arrS[(int)(s[i] - 'a')]++;
    }
    if (comp())
    {
        res = true;
        return;
    }
    for (int i = l; i < int(s.size()); i++)
    {
        arrS[(int)(s[i] - 'a')]++;
        arrS[(int)(s[i - l] - 'a')]--;
        if (comp())
        {
            res = true;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--)
    {
        fill_n(arrP, 26, 0);
        fill_n(arrS, 26, 0);
        res = false;
        input();
        progress();
        output();
    }
}