#include <iostream>
#include <cmath>
using namespace std;
bool prime(int x){
    if(x == 0 || x == 1) return false;
    for(int i = 2; i < sqrt(x); i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
int main(){int n;cin >> n;for(int i = 1; i <= n; i++)
if(n%i==0&&prime(n/i)==true&&prime(i)==true){cout<<max(n/i, i);return 0;}}