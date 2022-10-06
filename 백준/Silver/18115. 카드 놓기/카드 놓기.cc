#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> arr;
deque<int> pg;

void progress()
{
    int c = 1;
    int temp;
    for (int i = n - 1; i >= 0; i--)
    {
        switch (arr[i])
        {
        case 1:
            pg.push_back(c);
            break;
        case 2:
            temp = pg.back();
            pg.pop_back();
            pg.push_back(c);
            pg.push_back(temp);
            break;
        case 3:
            pg.push_front(c);
        }
        c++;
    }
}

void input()
{
    int temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
}
void output()
{
    for (int i = n - 1; i >= 0; i--)
    {
        cout << pg[i] << " ";
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