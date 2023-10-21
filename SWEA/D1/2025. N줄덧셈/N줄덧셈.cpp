#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int N; cin >> N;
    if(N % 2 == 0) {
        cout << (N + 1) * (N / 2);
    }
    else
    {
        cout << (N + 2) * (N / 2) + 1;
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}