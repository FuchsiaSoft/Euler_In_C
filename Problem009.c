#include <stdio.h>

int main(){
    int a,b,c;
    int result;
    for(a=1;a<333;a++){
        for(b=a;b<666;b++){
            for(c=b;c<1000;c++){
                if(a*a+b*b==c*c && a+b+c==1000)
                    result=a*b*c;
            }
        }
    }
    printf("Answer is: %d\n", result);
}
