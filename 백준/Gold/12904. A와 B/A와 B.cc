#include <bits/stdc++.h>
using namespace std;

string S, T;
bool res;
void input()
{
    cin >> S >> T;
    
}

void output()
{
    cout << res;
}

void progress()
{
    while (int(S.size()) != int(T.size()))
    {
        //cout << S.size() << ", " << T.size() << "\n";
        if (T[int(T.size() - 1)] == 'A')
        {
            T.erase(T.end() - 1);
        }
        else
        {
            T.erase(T.end() - 1);
            reverse(T.begin(), T.end());
        }
        //cout << "T : " << T << "\n";
    }
    if (S == T)
    {
        res = true;
    }
    else
    {
        false;
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