#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> arr1, arr2;
int N, M;

void input() {
    int temp;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        arr1.push_back(vector<int>());
        for (int j = 0; j < M; j++) {
            cin >> temp;
            arr1[i].push_back(temp);
        }
    }
    for (int i = 0; i < N; i++) {
        arr2.push_back(vector<int>());
        for (int j = 0; j < M; j++) {
            cin >> temp;
            arr2[i].push_back(temp);
        }
    }
}

void output() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr1[i][j] + arr2[i][j] << " ";
        }
        cout << "\n";
    }
}

void progress() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}