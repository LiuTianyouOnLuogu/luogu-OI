#include <iostream>
#include <algorithm>
using namespace std;
struct type{
    int number;
    int price;
    int answer;
}types[3];
int main(){
    int need, money = 0, Min = 2147483647;
    cin >> need;
    for(int i = 0; i < 3; i++){
        cin >> types[i].number >> types[i].price;
        int tmp = need;
        do{
            tmp -= types[i].number;
            types[i].answer += types[i].price;
        }while(tmp > 0);
        Min = min(types[i].answer, Min);
    }
    cout << Min << endl;
    return 0;
}