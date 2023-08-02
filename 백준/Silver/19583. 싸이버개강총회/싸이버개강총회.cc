#include <bits/stdc++.h>
using namespace std;

string T, N;
int S, E, Q;
set<string> start;
set<string> finish;

void progress()
{
    
}

void input()
{
    int tTemp;
    cin >> T;
    S = int(T[0] - '0') * pow(10, 3)
        + int(T[1] - '0') * pow(10, 2)
        + int(T[3] - '0')* pow(10, 1)
        + int(T[4] - '0') * pow(10, 0);
    cin >> T;
    E = int(T[0] - '0') * pow(10, 3)
        + int(T[1] - '0') * pow(10, 2)
        + int(T[3] - '0') * pow(10, 1)
        + int(T[4] - '0') * pow(10, 0);
    cin >> T;
    Q = int(T[0] - '0') * pow(10, 3)
        + int(T[1] - '0') * pow(10, 2)
        + int(T[3] - '0') * pow(10, 1)
        + int(T[4] - '0') * pow(10, 0);
    while (cin >> T >> N)
    {
        tTemp = int(T[0] - '0') * pow(10, 3)
            + int(T[1] - '0') * pow(10, 2)
            + int(T[3] - '0') * pow(10, 1)
            + int(T[4] - '0') * pow(10, 0);
        if (tTemp <= S)
        {
            start.insert(N);
        }
        else if (tTemp >= E && tTemp <= Q && start.count(N))
        {
            finish.insert(N);
        }
    }
}

void output()
{
    cout << int(finish.size());
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