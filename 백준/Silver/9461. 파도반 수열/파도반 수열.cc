#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t; cin >> t;
	int max;
	int* q_arr = new int[t];
	for (int i = 0; i < t; i++)
	{
		cin >> q_arr[i];
	}
	max = *max_element(q_arr, q_arr + t);
	long long* res = new long long[max];
	//cout << max << "\n";
	for (int i = 0; i < max; i++)
	{
		if (i == 0 || i == 1 || i == 2)
		{
			res[i] = 1;
			//cout << res[i] << " ";
			continue;
		}
		if (i == 3 || i == 4)
		{
			res[i] = 2;
			//cout << res[i] << " ";
			continue;
		}
		res[i] = res[i - 1] + res[i - 5];
		//cout << res[i] << " ";
	}
	//cout << "\n";
	for (int i = 0; i < t; i++)
	{
		cout << res[q_arr[i] - 1] << "\n";
	}
	delete[] q_arr;
	delete[] res;
}