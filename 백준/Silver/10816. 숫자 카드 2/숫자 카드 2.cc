#include <bits/stdc++.h>
using namespace std;

int N, M;
map<int, int> arr;
vector<int> val;

void input() {
    int temp;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr[temp]++;
    }
}

void output() {
    for (int i = 0; i < M; i++) {
        cout << val[i] << " ";
    }
}

void progress() {
    int temp;
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> temp;
        val.push_back(arr[temp]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}