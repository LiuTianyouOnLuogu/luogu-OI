#include <iostream>
using namespace std;
int Sn[] = {2, 4, 11, 31, 83, 227, 616, 1674, 4550, 12367, 33617, 91380, 248397, 675214};
int main(){
    int k;
    cin >> k;
    cout << Sn[k - 1] << endl;
}