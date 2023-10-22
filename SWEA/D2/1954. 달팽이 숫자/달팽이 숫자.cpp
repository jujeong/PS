#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T; cin >> T;
    int arr[10][10] = { 0, };
    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };
    for(int i = 1; i <= T; i++)
    {
        int N; cin >> N;
        int len = N, dist = 0, dir = 0;
        int x = 0, y = 0;
        for(int j = 1; j <= N * N; j++)
        {
        	arr[x][y] = j;
            switch(dir)
            {
                case 0:
                    dist++;
                    x += dx[0];
                    y += dy[0];
                	if(len == dist + 1)
                    {
                        len--;
                        dist = 0;
                        dir = 1;
                    }
                    break;
                case 1:
                    dist++;
                    x += dx[1];
                    y += dy[1];
                	if(len == dist)
                    {
                        dist = 0;
                        dir = 2;
                    }
                    break;
                case 2:
                    dist++;
                    x += dx[2];
                    y += dy[2];
                	if(len == dist)
                    {
                        len--;
                        dist = 0;
                        dir = 3;
                    }
                    break;
                case 3:
                    dist++;
                    x += dx[3];
                    y += dy[3];
                	if(len == dist)
                    {
                        dist = -1;
                        dir = 0;
                    }
                    break;
            }
        }
        cout << "#" << i << "\n";
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < N; k++)
            {
                cout << arr[k][j] << " ";
            }
            cout << "\n";
        }
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}