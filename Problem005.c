#include <stdio.h>

int main() {
    int i;
    int result=0;
    do{
        int j;
        for(j=1;j<=20;j++){
            result = i;
            if(i%j!=0){
                result=0;
                break;
            }
        }
        i+=20;
    }while(result==0);
    printf("Answer is: %d\n", result);
}
