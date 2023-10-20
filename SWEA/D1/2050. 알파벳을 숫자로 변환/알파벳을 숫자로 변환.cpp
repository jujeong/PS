#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	string s;
    cin >> s;
    for(int i = 0; i < int(s.size()); i++)
    {
        cout << (int)s[i] - 'A' + 1 << " ";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}