#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int total = brown + yellow;
    int col = 3;
    while(1) {
        if(total % col) {
            col++;
            continue;
        }
        int row = total / col;
        if((row - 2) * (col - 2) == yellow) {
            answer.push_back(row);
            answer.push_back(col);
            break;
        }
        col++;
    }
    return answer;
}