#include <bits/stdc++.h>
using namespace std;

int N;
int res = INT_MAX;
vector<char> arr;
void progress()
{
    bool cv;
    int temp;
    ////R->
    cv = false;
    temp = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (arr[i] == 'B')
        {
            cv = true;
        }
        if (cv && arr[i] == 'R')
        {
            temp++;
        }
    }
    if (temp < res)
    {
        res = temp;
    }
    ////<-R
    cv = false;
    temp = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 'B')
        {
            cv = true;
        }
        if (cv && arr[i] == 'R')
        {
            temp++;
        }
    }
    if (temp < res)
    {
        res = temp;
    }
    /////////////////////
    ////B->
    cv = false;
    temp = 0;
    for (int i = N - 1; i >= 0; i--)
    {
        if (arr[i] == 'R')
        {
            cv = true;
        }
        if (cv && arr[i] == 'B')
        {
            temp++;
        }
    }
    if (temp < res)
    {
        res = temp;
    }
    ////<-B
    cv = false;
    temp = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 'R')
        {
            cv = true;
        }
        if (cv && arr[i] == 'B')
        {
            temp++;
        }
    }
    if (temp < res)
    {
        res = temp;
    }
}
void input()
{
    char temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
}
void output()
{
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}