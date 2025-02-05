#include <bits/stdc++.h>
using namespace std;

int arr[2][3];
int res;

void input() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
}

void output() {
    if (res > 0) {
        cout << 1;
    }
    else if (res < 0) {
        cout << 2;
    }
    else {
        cout << 0;
    }
}

void progress() {
    res = (arr[0][0] + arr[0][1] * 2 + arr[0][2] * 3) - (arr[1][0] + arr[1][1] * 2 + arr[1][2] * 3);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}