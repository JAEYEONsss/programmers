#include <iostream>
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = false;
    int cnt_p = 0;
    int cnt_y = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            cnt_p++;
        else if(s[i] == 'y' || s[i] == 'Y')
            cnt_y++;
    }

    if (cnt_p == cnt_y)
        answer = true;

    return answer;
}

int main() {
    string temp;

    cin >> temp;

    cout << solution(temp);

    return 0;
}
