#include <bits/stdc++.h>
using namespace std;

int H, W;
bool arr[500][500];
int res;

void input()
{
    int temp;
    cin >> H >> W;
    for (int i = 0; i < W; i++)
    {
        cin >> temp;
        for (int j = H - 1; j >= H - temp; j--)
        {
            arr[i][j] = true;
        }
    }
}    

void output()
{
    cout << res;
}

void progress()
{
    int c;
    bool t = false;
    for (int i = 0; i < H; i++)
    {
        t = false;
        c = 0;
        for (int j = 0; j < W; j++)
        {
            if (!t && arr[j][i])
            {
                t = true;
            }
            else if (t && !arr[j][i])
            {
                c++;
            }
            else if (t && arr[j][i])
            {
                res += c;
                c = 0;
            }
        }
        //cout << "layer : " << res << "\n";
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