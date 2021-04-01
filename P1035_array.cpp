#include <iostream>
using namespace std;
double memory[(int)1e8];
double S(int n){
    double Sn = 0;
    for(double i = 1; i <= n; i++){
        Sn += 1/i;        
    }
    memory[n] = Sn;
    return Sn;
}
int main(){
    cerr << "int Sn[] = {" << flush;
    for(int k = 1; k <= 15; k++){
        for(int i = 1;; i++){
            double cache;
            if(memory[i] != 0) cache = memory[i];
            else cache = S(i);
            if(cache > k){
                cerr << i << ", " << flush;
                break;
            }
        }
    }
    return 0;
}