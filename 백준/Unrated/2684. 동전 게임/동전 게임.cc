#include <bits/stdc++.h>
using namespace std;

int P;
char arr[1000][40];
int res[1000][8];
string s;
void progress()
{
    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < 38; j++)
        {
            if (arr[i][j] == 'T' && arr[i][j + 1] == 'T' && arr[i][j + 2] == 'T')
            {
                res[i][0]++;
            }
            else if (arr[i][j] == 'T' && arr[i][j + 1] == 'T' && arr[i][j + 2] == 'H')
            {
                res[i][1]++;
            }
            else if (arr[i][j] == 'T' && arr[i][j + 1] == 'H' && arr[i][j + 2] == 'T')
            {
                res[i][2]++;
            }
            else if (arr[i][j] == 'T' && arr[i][j + 1] == 'H' && arr[i][j + 2] == 'H')
            {
                res[i][3]++;
            }
            else if (arr[i][j] == 'H' && arr[i][j + 1] == 'T' && arr[i][j + 2] == 'T')
            {
                res[i][4]++;
            }
            else if (arr[i][j] == 'H' && arr[i][j + 1] == 'T' && arr[i][j + 2] == 'H')
            {
                res[i][5]++;
            }
            else if (arr[i][j] == 'H' && arr[i][j + 1] == 'H' && arr[i][j + 2] == 'T')
            {
                res[i][6]++;
            }
            else if (arr[i][j] == 'H' && arr[i][j + 1] == 'H' && arr[i][j + 2] == 'H')
            {
                res[i][7]++;
            }
        }
    }
}
void input()
{
    cin >> P;
    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void output()
{
    for (int i = 0; i < P; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "\n";
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