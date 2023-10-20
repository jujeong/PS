#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int T; cin >> T;
    for(int i = 1; i <= T; i++)
    {
        int N; cin >> N;
        cout << "#" << i << " " << N / 3 << "\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}