#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    int temp, data;

    for (int i = 0; i < s.length(); i++) {
        if(s[i] == ' ')
            continue;

        if (s[i] >= 65 && s[i] <= 90) {
            temp = int(s[i]);
            temp += n;
            if (temp > 90) {
                data = temp - 90;
                temp = 64 + data;
            }
            s[i] = temp;
        }
        else{
            temp = int(s[i]);
            temp += n;
            if (temp > 122) {
                data = temp - 122;
                temp = 96 + data;
            }
            s[i] = temp;
        }
    }
    return s;
}

int main() {
    string s;
    int n;
    getline(cin, s);
    cin >> n;
    cout << solution(s, n);
    return 0;
}
