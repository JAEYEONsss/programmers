#include <iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;

    for (int i = 0; i < arr.size(); i++) {
        answer += arr[i];
    }

    answer /= arr.size();

    return answer;
}

int main() {
    vector<int> arr;
    int num;

    for (int i = 0; i < 5; i++) {
        cin >> num;
        arr.push_back(num);
    }

    cout << solution(arr);

    return 0;
}
