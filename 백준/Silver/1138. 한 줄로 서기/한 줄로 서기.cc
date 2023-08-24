#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 0, temp = 0, temp_pos = 0, act_pos = 0;
	vector<int> arr;
	cin >> n;

	int* row = new int[n] {};


	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		temp_pos = arr[i];
		for (int j = 0; j <= temp_pos; j++)
		{
			if (row[j] < i + 1 && row[j] != NULL)
			{
				temp_pos++;
			}
		}
		row[temp_pos] = i + 1;
	}


	for (int i = 0; i < n; i++)
	{
		cout << row[i] << " ";
	}
}