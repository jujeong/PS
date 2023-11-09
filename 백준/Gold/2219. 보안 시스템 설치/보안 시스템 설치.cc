#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[201][201];
int L = INT_MAX / 2 - 1;
int res;

void input() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            arr[i][j] = i == j ? 0 : L;
        }
    }
    int t1, t2, t3;
    for (int i = 0; i < M; i++) {
        cin >> t1 >> t2 >> t3;
        arr[t1][t2] = t3;
        arr[t2][t1] = t3;
    }
}

void output() {
    cout << res;
}

void progress() {
    int tempVal, minVal = INT_MAX;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
            }
        }
    }
    for (int i = 1; i <= N; i++) {
        tempVal = 0;
        for (int j = 1; j <= N; j++) {
            tempVal += arr[i][j];
        }
        if (tempVal < minVal) {
            res = i;
            minVal = tempVal;
        }
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