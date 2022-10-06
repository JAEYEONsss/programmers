#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int cnt =0;

    for (int i = 0; i < s.length(); i++) {
        if(s[i] == ' '){
            cnt = 0;
            continue;
        }
        if (cnt % 2 == 0) {
            if(s[i]>=97 && s[i] <= 122)
                s[i] -= 32;
        }else{
            if(s[i] >=65 && s[i] <= 90)
                s[i] += 32;
        }
        cnt++;
    }

    return s;
}

int main() {
    string s;
    getline(cin, s);
    cout << solution(s);
    return 0;
}
