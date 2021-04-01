#include <iostream>
using namespace std;
int main(){
    int n, total = 0, days = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            total += i;
            days ++;
            cerr << "total += " << i << endl;
            if(days == n){
                goto end;
            }
        }
    }
    end: cout << total << endl;
    return 0;
}