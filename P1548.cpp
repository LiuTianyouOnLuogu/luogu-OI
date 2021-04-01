#include <iostream>
using namespace std;
int main(){
    int sqrts = 0, no_sqrts = 0;
    int n, m;
    cin >> n >> m;
    int a = max(n, m), b = min(n, m);
    sqrts = (a + 1) * b;
    no_sqrts = (a + b) * 2;
    cout << sqrts << ' ' << no_sqrts << endl;
    return 0;
}
//去你X的，傻X，CCF