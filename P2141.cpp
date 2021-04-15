#include <iostream>
#include <set>
using namespace std;
int main(){
    int n = 0, ans = 0;
    set<pair<int, bool>> Set;
    cin >> n;
    while(cin >> n){
        Set.insert({n, false});
    }
    for(set<pair<int, bool>>::iterator it1 = Set.begin(); it1 != Set.end(); it1++){
        for(set<pair<int, bool>>::iterator it2 = Set.begin(); it2 != Set.end(); it2++){
            if(*it1 == *it2) continue;
            if(Set.find({it1->first + it2->first, false}) != Set.end()){
                ans ++;
            }
            pair<int, bool> tmp = *Set.find({it1->first + it2->first, false});
            tmp.second = true;
            Set.erase(Set.find({it1->first + it2->first, false}));
            Set.insert(tmp);
        }
    }
    cout << ans << endl;
    return 0;
}