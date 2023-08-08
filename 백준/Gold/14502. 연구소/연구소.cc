#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<pair<int, int>> virus;
int arr[8][8];
bool wall_visited[8][8];
bool map_visited[8][8];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int res;


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
                virus.push_back(make_pair(i, j));
            }
        }
    }
}

void output()
{
    cout << res;
    /*for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";*/
}

void progress(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && nx < N && ny >= 0 && ny < M && arr[nx][ny] != 1 && arr[nx][ny] != 3 && !map_visited[nx][ny])
        {
            map_visited[nx][ny] = true;
            progress(nx, ny);
        }
    }
}

void build_wall(int d)
{
    if (d == 3)
    {
        int vx, vy;
        memset(map_visited, false, sizeof(map_visited));
        for (int i = 0; i < int(virus.size()); i++)
        {
            vx = virus[i].first;
            vy = virus[i].second;
            if (!map_visited[vx][vy])
            {
                progress(vx, vy);
            }
        }
        int tempRes = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                if (!map_visited[i][j] && arr[i][j] == 0)
                {
                    tempRes++;
                }
            }
        }
        res = max(res, tempRes);
        return;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (!arr[i][j] && !wall_visited[i][j])
            {
                wall_visited[i][j] = true;
                arr[i][j] = 3; // 지도에서 새로운 벽 '3'을 만듬
                build_wall(d + 1);
                wall_visited[i][j] = false;
                arr[i][j] = 0; // 지도에서 새로운 벽 '3'을 지움
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
    build_wall(0);
    output();
}