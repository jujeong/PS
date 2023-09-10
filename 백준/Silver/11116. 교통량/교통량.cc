#include <bits/stdc++.h>
using namespace std;

int N, M;
int res;
void input()
{
    cin >> M;
    res = 0;
}

void output()
{
    cout << res << "\n";
}

void progress()
{
    int temp, t0, t1, t2, t3, target;
    vector<int> arrL;
    vector<int> arrR;
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        arrL.push_back(temp);
    }
    sort(arrL.begin(), arrL.end());
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        arrR.push_back(temp);
    }
    sort(arrR.begin(), arrR.end());
    for (int i = M - 1; i >= 0; i--)
    {
        if (find(arrL.begin(), arrL.end(), arrL[i] + 500) != arrL.end() &&
            find(arrR.begin(), arrR.end(), arrL[i] + 1000) != arrR.end() &&
            find(arrR.begin(), arrR.end(), arrL[i] + 1500) != arrR.end())
        {
            target = arrL[i];
            //cout << "found : " << arrL[i] << "\n";
            res++;
            arrL.erase(arrL.begin() + i);
            t1 = find(arrL.begin(), arrL.end(), target + 500) - arrL.begin();
            arrL.erase(arrL.begin() + t1);
            t2 = find(arrR.begin(), arrR.end(), target + 1000) - arrR.begin();
            arrR.erase(arrR.begin() + t2);
            t3 = find(arrR.begin(), arrR.end(), target + 1500) - arrR.begin();
            arrR.erase(arrR.begin() + t3);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    while (N--)
    {
        input();
        progress();
        output();
    }
}