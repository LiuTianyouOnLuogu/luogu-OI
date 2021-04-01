#include <iostream>
using namespace std;
int main(){
    int total = 0;
    char ch;
    while(cin >> ch){
        if(ch == '1'){
            total ++;
        }
    }
    cout << total << endl;
    return 0;
}