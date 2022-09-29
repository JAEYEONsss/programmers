#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

 int solution(vector<int> absolutes, vector<bool> signs) {
     int answer = 123456789;

     for(int i = 0; i<signs.size(); i++){
         if(signs[i] == false)
             absolutes[i] *= -1;
     }

     answer = accumulate(absolutes.begin(), absolutes.end(), 0);

     return answer;
 }

int main() {
    vector<int> absolutes = {4, 7, 12};
    vector<bool> signs = {true, false, true};

    cout << solution(absolutes, signs);

    return 0;
}
