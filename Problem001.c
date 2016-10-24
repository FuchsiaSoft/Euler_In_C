#include <stdio.h>

int main() {
    int x = 0;
    int i;
    for(i=3; i<1000; i++){
        if(i%3 == 0 || i%5 ==0) x+=i;
    }
    printf("Answer is: %d\n", x);
    //we changed something
} 
