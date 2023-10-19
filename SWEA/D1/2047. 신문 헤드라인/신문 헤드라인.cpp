#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
	string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i]  -= 32;
        }
    }
    cout << s;
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}