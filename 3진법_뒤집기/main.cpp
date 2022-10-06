#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int cnt = 0;
    vector<int> temp;

    while(n > 0){
        temp.push_back(n%3);
        n /= 3;
    }

    for(int i = temp.size() - 1; i>= 0; i--)
        answer += temp[i]*(int)pow(3, temp.size()-1-i);

    return answer;
}

int main() {
    int num;
    cin >> num;
    cout << solution(num);
    return 0; 
}
