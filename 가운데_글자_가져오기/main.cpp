#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int num = s.size()/2;

    if (s.size() % 2 == 0)
        s = s.substr(num-1, 2);
    else
        s = s.substr(num, 1);

    return s;
}

int main() {
    string s;
    cin >> s;

    cout << solution(s);

    return 0;
}
