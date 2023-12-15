#include <bits/stdc++.h>
using namespace std;

int arr[101];
int N, M;

void input() {
    int t1, t2, t3;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> t1 >> t2 >> t3;
        for (int i = t1; i <= t2; i++) {
            arr[i] = t3;
        }
    }
}

void output() {
    for (int i = 1; i <= N; i++) {
        cout << arr[i] << " ";
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