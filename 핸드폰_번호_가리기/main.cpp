#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {

    for(int i =0; i<phone_number.length()-4; i++)
        phone_number[i] = '*';

    return phone_number;
}

int main() {
    string num;

    cin >> num;

    cout << solution(num);
    return 0;
}
