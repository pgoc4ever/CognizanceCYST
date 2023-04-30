#include <stdio.h>
void encrypt(char a[30]){
    for(int i=0;i<30;i++){
        if(i%2==0){
            a[i]=(char)((int)a[i]+5);
        }
        else{
            a[i]=(char)((int)a[i]-5);
        }
    }
    for(int i=0;i<30;i++){
        printf("%c",a[i]);
    }
}

int main(){
    char a[30];
    scanf("%s",a);
    encrypt(a);

    return 0;
}