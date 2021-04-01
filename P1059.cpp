#include <iostream>
#include <set>
//#include <algorithm>
using namespace std;
set<int> Set;
int main(){
    int n;
    cin >> n;
    while(cin >> n){
        Set.insert(n);
    }
    //sort(Set.begin(), Set.end());
    cout << Set.size() << endl;
    for(set<int>::iterator it = Set.begin(); it != Set.end(); it++){
        cout << *it << " ";
    }
    return 0;
}