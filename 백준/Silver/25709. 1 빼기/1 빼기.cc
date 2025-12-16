#include <bits/stdc++.h>
using namespace std;

string s;
int res;

void input()
{
    cin >> s;
}

void output()
{
    cout << res;
}

void progress()
{
    bool changed = false;
    while (s[0] != '0')
    {
        changed = false;
        for (int i = 0; i < int(s.size()); i++)
        {
            if (s[i] == '1')
            {
                if (int(s.size()) == 1)
                {
                    res++;
                    return;
                }
                s.erase(s.begin() + i);
                if (i == 0)
                {
                    while (s[i] == '0')
                    {
                        s.erase(s.begin() + i);
                        if (int(s.size()) == 0)
                        {
                            res++;
                            return;
                        }
                    }
                }
                res++;
                changed = true;
                //cout << "s : " << s << "\n";
                continue;
            }
        }
        if (!changed)
        {
            int j = int(s.size()) - 1;
            while (s[j] == '0')
            {
                s[j] = '9';
                j--;
            }
            s[j] -= 1;
            //cout << "s : " << s << "\n";
            res++;
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