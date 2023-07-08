#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[1001][1001];
bool visited[1001][1001];
int dist[1001][1001];
int res;

vector<pair<int, int>> ripe;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = { 0 , 0, -1, 1 };

void progress()
{
    int x, y;
    queue<pair<int, int>> q;
    for (int i = 0; i < int(ripe.size()); i++)
    {
        q.push(ripe[i]);
        visited[ripe[i].first][ripe[i].second] = true;
    }
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if ((0 <= nx && nx < N && 0 <= ny && ny < M) && !visited[nx][ny] && arr[nx][ny] != -1)
            {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                res = dist[nx][ny];
                q.push(make_pair(nx, ny));
            }
        }
    }
}

void input()
{
    cin >> M >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                ripe.push_back(make_pair(i, j));
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
            if (arr[i][j] == 0 && dist[i][j] == 0)
            {
                res = -1;
            }
            //cout << dist[i][j] << " ";
        }
        //cout << "\n";
    }
    cout << res;
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