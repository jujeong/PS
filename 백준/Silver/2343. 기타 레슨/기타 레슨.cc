#include <bits/stdc++.h>
using namespace std;

int N, M;
int low, high, mid, c, sum;
vector<int> arr;

void progress()
{
    while (low <= high)
    {
        //cout << "low : " << low << ",high : " << high << "\n";
        c = 0; sum = 0;
        mid = (low + high) / 2;
        for (int i = 0; i < N; i++)
        {
            if (sum + arr[i] > mid)
            {
                sum = 0;
                c++;
            }
            sum += arr[i];
        }
        if (sum)
        {
            c++;
        }
        if (c <= M)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}
void input()
{
    int t;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        arr.push_back(t);
        high += t;
        low = max(t, low);
    }
}
void output()
{
    cout << low;
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