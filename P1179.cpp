#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    int l, r, ans = 0;
    char buffer[1024];
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        sprintf(buffer, "%d", i);
        for(int i = 0; i < strlen(buffer); i++){
            if(buffer[i] == '2') ans++;
        }
        memset(buffer, 0, sizeof(buffer));
    }
    cout << ans;
    return 0;
}