#include <iostream>
using namespace std;
char map[1000][1000];
int at(int i, int j, int m, int n){
    if(i < 0 || i > m || j < 0 || j > n || map[i][j] != '*'){
        return 0;
    }
    return 1;
}
int check(int i, int j, int m, int n){
    int total = 0;
    total += at(i - 1, j - 1, m, n);
    total += at(i - 1, j, m, n);
    total += at(i - 1, j + 1, m, n);
    total += at(i, j - 1, m, n);
    total += at(i, j + 1, m, n);
    total += at(i + 1, j - 1, m, n);
    total += at(i + 1, j, m, n);
    total += at(i + 1, j + 1, m, n);
    return total;
}
int main(){
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> map[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(map[i][j] == '*'){
                cout << '*';
                continue;
            }
            cout << check(i, j, m, n);
        }
        cout << endl;
    }
    return 0;
}