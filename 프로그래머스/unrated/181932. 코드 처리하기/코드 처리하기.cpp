#include <bits/stdc++.h>

using namespace std;

string solution(string code) {
    string answer = "";
    bool mode = false;
    for(int i = 0; i < int(code.size()); i++) {
        if(!mode) {
            if(code[i] == '1') {
                mode = true;
            }
            else {
                if(!(i % 2)) {
                    answer += code[i];
                }
            }
        }
        else {
            if(code[i] == '1') {
                mode = false;
            }
            else {
                if(i % 2) {
                    answer += code[i];
                }
            }
        }
    }
    if(answer == "") {
        answer = "EMPTY";
    }
    return answer;
}