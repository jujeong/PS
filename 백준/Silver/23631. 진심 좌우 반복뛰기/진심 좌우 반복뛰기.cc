#include <bits/stdc++.h>
using namespace std;

long long T, N, K;
long long res;

long long search(long long l, long long h) {
    if (l >= h) {
        return l;
    }
    long long m = (l + h) / 2;
    if (m * (m + 1) * K >= N * 2) {
        return search(l, m);
    }
    else {
        return search(m + 1, h);
    }
}

void input() {
    cin >> N >> K;
}

void output() {
    
}

void progress() {;
    long long val = search(0, 5000);
    long long total = val * (val + 1) / 2;
    if (val % 2) {
        res = K * (val / 2 + 1) - total * K + N - 1;
        cout << res << " R\n";
    }
    else {
        res = K * (val / 2) * (-1) + total * K - N + 1;
        cout << res << " L\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--) {
        input();
        progress();
        output();
    }
}