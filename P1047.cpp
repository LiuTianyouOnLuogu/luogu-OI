#include <iostream>
using namespace std;
bool fuck[(int)1e4];
int main(){
    int l, m, ans = 0;
    cin >> l >> m;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            fuck[j] = true;
        }
    }
    for(int i = 0; i <= l; i++){
        if(fuck[i] == false){
            ans ++;
        }
    }
    cout << ans;
    return 0;
}