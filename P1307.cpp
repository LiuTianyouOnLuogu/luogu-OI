#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string str;
    bool fu = false;
    cin >> str;
    if(str[0] == '-'){
        str.erase(str.begin());
        fu = true;
    }
    reverse(str.begin(), str.end());
    while(str[0] == '0'){
        str.erase(str.begin());
    }
    if(fu == true){
        cout << '-';
    }
    cout << str << endl;
    return 0;
}