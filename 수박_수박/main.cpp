#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    vector<string> fruit = {"수","박"};

    for(int i=0; i<n; i++)
        answer += fruit[i%2];

    return answer;
}

int main() {
    int num;

    cin >> num;
    cout << solution(num);

    return 0;
}
