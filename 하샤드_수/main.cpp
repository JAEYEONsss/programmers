#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int temp=0;
    int test = x;

    while (x > 0) {
        temp += (x %   10);
        x /= 10;
    }

    if(test % temp != 0)
        answer = false;


    return answer;
}

int main() {
    int num;

    cin >> num;
    cout << solution(num);
    return 0;
}
