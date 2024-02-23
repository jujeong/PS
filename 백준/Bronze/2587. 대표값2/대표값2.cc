#include <bits/stdc++.h>
using namespace std;

int arr[5];
int x, y, sum;

void input() {
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
}

void output() {
    cout << sum / 5 << "\n";
    cout << arr[2];
}

void progress() {
    sort(arr, arr + 5);

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    progress();
    output();
}