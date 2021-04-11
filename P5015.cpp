#include <iostream>
using namespace std;
int main(){
    string str;
    int ans = 0;
    while(cin >> str){
        ans += str.length();
    }
    cout << ans << endl;
    return 0;
}