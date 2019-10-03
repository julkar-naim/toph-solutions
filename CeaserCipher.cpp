#include <stdio.h>
#include <string.h>

int main(){
    int n; scanf("%d", &n);
    scanf("\n");
    char str[100];
    scanf("%[^\n]s", &str);

    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' ')
            printf("%c", str[i]);
        else if(str[i] - n < 'a'){
            int value = 'a' - (str[i] - n);
            value--;
            printf("%c", 'z' - value);
        }
        else
            printf("%c", str[i] - n);
    }
}
