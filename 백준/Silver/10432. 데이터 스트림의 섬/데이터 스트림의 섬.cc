#include <bits/stdc++.h>
using namespace std;

int P;
vector<pair<int, int>> res;
int arr[12];
void input()
{
    cin >> P;
}

void output()
{
    for (int i = 0; i < P; i++)
    {
        cout << res[i].first << " " << res[i].second << "\n";
    }
}

void progress()
{
    int t;
    int m;
    int r;
    for (int i = 0; i < P; i++)
    {
        r = 0;
        cin >> t;
        for (int j = 0; j < 12; j++)
        {
            cin >> arr[j];
        }
        for (int j = 1; j <= 10; j++)
        {
            for (int k = 0; k < 12 - j; k++)
            {
                m = INT_MAX;
                //cout << "Checked : ";
                for (int l = k; l < k + j; l++)
                {
                    //cout << arr[l] << ", ";
                    m = min(m, arr[l]);
                }
                //cout << "\n";
                if (m > arr[k - 1] && m > arr[k + j])
                {
                    r++;
                }
            }
        }
        res.push_back(make_pair(t, r));
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