#include <bits/stdc++.h>
using namespace std;

int N, M;
set<int> arr;

void input() {
    int temp;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr.insert(temp);
    }
    cin >> M;
    for (int i = 0; i < M; i++) {
        cin >> temp;
        if (arr.find(temp) != arr.end()) {
            cout << true << " ";
        }
        else {
            cout << false << " ";
        }
    }
}

void output() {
    
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