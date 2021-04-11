#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    pair<int, int> happy[7];
    for(int i = 0; i < 7; i++){
        int school, mom;
        cin >> school >> mom;
        happy[i].first = i + 1;
        happy[i].second = school + mom;
    }
    sort(happy, happy + 6, [](pair<int, int> a, pair<int, int> b) -> bool{
        return a.second > b.second;
    });
    if(happy[0].second < 8){
        cout << 0;
    }else{
        cout << happy[0].first;
    }
    return 0;
}