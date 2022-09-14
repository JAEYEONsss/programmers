#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";

    if(num%2 == 0)
        answer = "Even";
    else
        answer = "Odd";

        return answer;
}

int main() {
    int num;

    cin >> num;
    cout << solution(num);

    return 0;
}
