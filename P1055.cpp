#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    char one[1], two[3], three[5], four[1];
    int check = 0;
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", &one[0], &two[0], &two[1], &two[2], &three[0], &three[1], &three[2], &three[3], &three[4], &four[0]);
    check = ((one[0] - '0') * 1 + (two[0] - '0') * 2 + (two[1] - '0') * 3 + (two[2] - '0') * 4 + (three[0] - '0') * 5 + (three[1] - '0') * 6 + (three[2] - '0') * 7 + (three[3] - '0') * 8 + (three[4] - '0') * 9) % 11;
    if(check == four[0] - '0'){
        cout << "Right";
    }else{
        printf("%c-%c%c%c-%c%c%c%c%c-%c", one[0], two[0], two[1], two[2], three[0], three[1], three[2], three[3], three[4], (check != 10)?(check + '0'):'X');
    }
    return 0;
}