#include <bits/stdc++.h>
using namespace std;

int N, k;
vector<int> arr;

void input() {
    int temp;
    cin >> N >> k;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
}

void output() {
    cout << arr[k - 1];
}

void progress() {
    sort(arr.begin(), arr.end(), greater<>());
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}