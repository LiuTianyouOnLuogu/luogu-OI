#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
    int n, x, ans = 0;
    char buffer[1024];
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        sprintf(buffer, "%d", i);
        string str = buffer;
        for(char ch : str){
            if(ch == x + '0'){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}