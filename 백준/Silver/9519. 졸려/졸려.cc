#include <bits/stdc++.h>
using namespace std;

long long x;
string s, res;
int s_size;

void progress()
{
    string temp1, temp2, val;
    int val_c = 0;
    val = s;
    for (int i = 0; i < x; i++)
    { 
        //cout << "i : " << i << "\n";
        temp1 = "", temp2 = "";
        for (int j = 0; j < s_size; j++)
        {
            if (j % 2 == 0)
            {
                temp1 += s[j];
            }
            else
            {
                temp2 += s[j];
            }
        }
        reverse(temp2.begin(), temp2.end());
        s = temp1 + temp2;
        val_c++;
        if (val == s)
        {
            i = -1;
            x %= val_c;
        }
        //cout << "s  : " << s << "\n";
    }
}

void input()
{
    cin >> x >> s;
    s_size = int(s.size());
}
void output()
{
    cout << s;
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