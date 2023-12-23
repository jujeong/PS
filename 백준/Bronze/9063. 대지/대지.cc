#include <bits/stdc++.h>
using namespace std;

int N, minX = 10001, minY = 10001, maxX = -10001, maxY = -10001;

void input() {
    int x, y;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        if (minX > x) minX = x;
        if (maxX < x) maxX = x;
        if (minY > y) minY = y;
        if (maxY < y) maxY = y;
    }
}

void output() {
    cout << (maxX - minX) * (maxY - minY);
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