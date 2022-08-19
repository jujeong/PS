#include <bits/stdc++.h>
using namespace std;

int n;
string arr[50];

void output();

void progress()
{
    int fn = 0, sn = 0;
    //sorting progress
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            //cout << "\n";
            //output();
            //cout << "\n";
            if (arr[j - 1].size() != arr[j].size())//조건 1
            {
                if (arr[j - 1].size() > arr[j].size())
                {
                    swap(arr[j - 1], arr[j]);
                }
            }
            else
            {
                fn = 0, sn = 0;

                for (int k = 0; k < arr[j].size(); k++)//조건 2 3
                {
                    if (arr[j - 1][k] >= '0' && arr[j - 1][k] <= '9')
                    {
                        fn += arr[j - 1][k] - '0';
                    }
                    if (arr[j][k] >= '0' && arr[j][k] <= '9')
                    {
                        sn += arr[j][k] - '0';
                    }
                }
                //cout << arr[j - 1] << "\n" << arr[j] << "\n";
                //cout << "fn : " << fn << ", sn : " << sn << "\n";
                if (fn > sn)//조건 2
                {
                    swap(arr[j - 1], arr[j]);
                }
                else if (fn == sn)
                {
                    for (int k = 0; k < arr[j].size(); k++)//조건 3
                    {
                        //cout << "arr[j - 1] : " << arr[j - 1][k] << ", arr[j] : " << arr[j][k] << "\n";
                        if (arr[j - 1][k] == arr[j][k])
                        {
                            continue;
                        }
                        else if (arr[j - 1][k] < arr[j][k])
                        {
                            break;
                        }
                        else if (arr[j - 1][k] > arr[j][k])
                        {
                            swap(arr[j - 1], arr[j]);
                            //cout << "oc\n";
                            break;
                        }
                    }
                }
            }
        }
    }
}

void input()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void output()
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\n";
    }
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