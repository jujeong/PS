#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	for(int i = 1; i <= 10; i++)
    {
        int arr[101] = { 0, };
        int c; cin >> c;
        int temp;
        int min = 1, max = 100;
        for(int j = 0; j < 100; j++)
        {
            cin >> temp;
            for(int k = 1; k <= temp; k++)
            {
                arr[k]++;
            }
        }
        while(arr[min] == 100)
            {
                min++;
            }
            while(arr[max] == 0)
            {
                max--;
            }
        for(int j = 0; j < c; j++)
        {
            arr[min]++;
            arr[max]--;
            while(arr[min] == 100)
            {
                min++;
            }
            while(arr[max] == 0)
            {
                max--;
            }
            if(max == min)
            {
                break;
            }
        }
        cout << "#" << i << " " << max - min + 1 << "\n";
    }
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}