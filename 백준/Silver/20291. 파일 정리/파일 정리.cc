#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<string, int>> arr;
vector<string> rec;

void progress()
{
    sort(rec.begin(), rec.end());
}

void input()
{
    string s, t;
    bool flag;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        flag = false;
        t = "";
        for (int j = 0; j < int(s.size()); j++)
        {
            if (flag == true)
            {
                t += s[j];
            }
            if (s[j] == '.')
            {
                flag = true;
            }
        }
        rec.push_back(t);
    }
}
void output()
{
    string t;
    int count = 1;
    t = rec[0];
    for (int i = 1; i < int(rec.size()); i++)
    {
        if (t != rec[i])
        {
            cout << t << " " << count << "\n";
            t = rec[i];
            count = 1;
        }
        else
        {
            count++;
        }
        if (i == int(rec.size() - 1))
        {
            if (t != rec[i])
            {
                count = 1;
                cout << rec[i] << " " << count << "\n";
            }
            else
            {
                cout << t << " " << count << "\n";
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