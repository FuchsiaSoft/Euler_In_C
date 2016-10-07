#include <stdio.h>

int main() {
    int a, b, c;
    a = 0;
    b = 1;
    c = 1;
    int x = 0;
    while(c<4000000){
        a = b;
        b = c;
        c = a + b;
        if(c%2==0) x+=c;
    }
    printf("Answer is: %d\n", x);
}
