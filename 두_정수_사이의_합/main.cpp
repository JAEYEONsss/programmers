#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    if (a < b) {
        while (a <= b) {
            answer += a;
            a++;
        }
    }
    else if(a > b){
        while (b <= a) {
            answer += b;
            b++;
        }
    }
    else
        answer = a;

    return answer;
}

int main() {
    int a,b;

    cin >> a >> b;

    cout << solution(a, b);
    return 0;
}
