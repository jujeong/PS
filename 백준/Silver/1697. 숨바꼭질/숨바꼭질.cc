#include <bits/stdc++.h>
using namespace std;

int N, K;
int arr[100001];
bool cache[100001];

void input() {
    cin >> N >> K;
}

void output() {
    cout << arr[K];
}

void progress() {
    queue<int> q;
    q.push(N);
    cache[N] = true;
    while (!q.empty()) {
        int x = q.front();
        if (x == K) {
            break;
        }
        q.pop();
        if (x * 2 <= 100000 && !cache[x * 2]) {
            arr[x * 2] = arr[x] + 1;
            cache[x * 2] = true;
            q.push(x * 2);
        }
        if (x + 1 <= 100000 && !cache[x + 1]) {
            arr[x + 1] = arr[x] + 1;
            cache[x + 1] = true;
            q.push(x + 1);
        }
        if (x - 1 >= 0 && !cache[x - 1]) {
            arr[x - 1] = arr[x] + 1;
            cache[x - 1] = true;
            q.push(x - 1);
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