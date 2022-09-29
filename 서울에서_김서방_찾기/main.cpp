#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer;

    vector<string>::iterator iter = std::find(seoul.begin(), seoul.end(), "kim");
    int index = distance(seoul.begin(), iter);

    answer = "김서방은 " + to_string(index) + "에 있다";

    return answer; 
}

int main() {
    vector<string> seoul = {"kim", "lee", "yang"};//임의의 vector를 대입하고 문제 풀이 진행했음.

    cout << solution(seoul);


    return 0;
}
