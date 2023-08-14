#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[1000][1000];
int dist[1000][1000];
int initX, initY;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void input()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2)
            {
                initX = i, initY = j;
            }
        }
    }
}
void output()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 1 && dist[i][j] == 0)
            {
                dist[i][j] = -1;
            }
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
}

void progress()
{
    int nx, ny, x, y;
    queue<pair<int, int>> q;
    q.push(make_pair(initX, initY));
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            nx = x + dx[i];
            ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < N && ny < M && arr[nx][ny] != 0 && dist[nx][ny] == 0)
            {
                dist[nx][ny] = dist[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
    dist[initX][initY] = 0;
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