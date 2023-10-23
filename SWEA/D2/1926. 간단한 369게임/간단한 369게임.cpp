#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int N; cin >> N;
    for(int i = 1; i <= N; i++)
    {
        string s = to_string(i);
        int c = 0;
        for(int i = 0; i < int(s.size()); i++)
        {
            if(s[i] == '3' || s[i] == '6' || s[i] == '9')
            {
                c++;
            }
        }
        if(c)
        {
			for(int i = 0; i < c; i++)
        	{
            	cout << "-";
        	}
        }
        else
        {
            for(int i = 0; i < int(s.size()); i++)
        	{
            	cout << s[i];
        	}
        }
        cout << " ";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}