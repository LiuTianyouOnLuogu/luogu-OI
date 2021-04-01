#include <iostream>
using namespace std;
int a[10];
int main(){
    int h = 0, ans = 0;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
    }
    cin >> h;
    for(int i = 0; i < 10; i++){
        if(a[i] <= h + 30){
            ans ++;
        }
    }
    cout << ans << endl;
    return 0;
}