#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string temp;

    if(s[0] == '-'){
        for (int i = 1; i < s.length(); i++)
            temp[i-1] = s[i];
        answer = stoi(temp);
    }
    answer = stoi(s);

    return answer;
}

int main() {
    string s;

    cin >> s;

    cout << solution(s);

    return 0;
}
