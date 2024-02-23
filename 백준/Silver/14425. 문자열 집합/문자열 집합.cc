#include <bits/stdc++.h>
using namespace std;

int N, M, res;
set<string> arr;

void input() {
    string temp;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr.insert(temp);
    }
    for (int i = 0; i < M; i++) {
        cin >> temp;
        if (arr.find(temp) != arr.end()) {
            res++;
        }
    }
}

void output() {
    cout << res;
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