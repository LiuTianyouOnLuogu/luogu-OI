#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int times = 0, place = -1;
    char key[11];
    char ch = 0;
    scanf("%s", key);
    for(int i = 0; i < strlen(key); i++){
        key[i] = tolower(key[i]);
    }
    char buf[11];
    int length = 0, i = 0;
    while((ch = fgetc(stdin)) != (char)EOF){
        ch = tolower(ch);
        if(ch == '\n') continue;
        if(ch != ' '){
            buf[length++] = ch;
        }else if(ch == ' '){
            buf[length + 1] = '\0';
            if(!strcmp(key, buf)){
                if(place == -1) place = i - strlen(key);
                times++;
            }
            for(int i = 0; i < 11; i++){
                buf[i] = '\0';
            }
            length = 0;
        }
        i++;
    }
    if(times == 0){
        printf("-1\n");
        return 0;
    }
    printf("%d %d\n", times, place);
    return 0;
}