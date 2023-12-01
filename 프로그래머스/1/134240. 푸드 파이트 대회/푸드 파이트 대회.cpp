#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int i = 1; i < int(food.size()); i++) {
        for(int j = 0; j < food[i] / 2; j++) {
            answer += char(i + 48);
        }
    }
    answer += char(48);
    for(int i = int(food.size()) - 1; i >= 1 ; i--) {
        for(int j = 0; j < food[i] / 2; j++) {
            answer += char(i + 48);
        }
    }
    return answer;
}