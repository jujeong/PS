#include <bits/stdc++.h>
using namespace std;

int N;
int arr[100][100];
int res = INT_MAX;
int visited[100][100];

int getValue(int x, int y)
{
    return arr[x][y] +
        arr[x + 1][y] +
        arr[x - 1][y] +
        arr[x][y + 1] +
        arr[x][y - 1];
}

bool checkVisited(int x, int y)
{
    if (visited[x][y] ||
        visited[x + 1][y] ||
        visited[x - 1][y] ||
        visited[x][y + 1] ||
        visited[x][y - 1])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enableVisited(int x, int y)
{
    visited[x][y] = true;
    visited[x - 1][y] = true;
    visited[x][y - 1] = true;
    visited[x + 1][y] = true;
    visited[x][y + 1] = true;
}
void disableVisited(int x, int y)
{
    visited[x][y] = false;
    visited[x - 1][y] = false;
    visited[x][y - 1] = false;
    visited[x + 1][y] = false;
    visited[x][y + 1] = false;
}

void progress(int d, int x, int y, int p)
{
    if (d == 3)
    {
        if (res > p)
        {
            res = p;
        }
        return;
    }
    for (int i = 1; i < N - 1; i++)
    {
        for (int j = 1; j < N - 1; j++)
        {
            if (checkVisited(i, j))
            {
                continue;
            }
            enableVisited(i, j);
            progress(d + 1, i, j, p + getValue(i, j));
            disableVisited(i, j);
        }
    }
}
void input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void output()
{
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    for (int i = 1; i < N - 1; i++)
    {
        for (int j = 1; j < N - 1; j++)
        {
            progress(0, i, j, 0);
        }
    }
    output();
}