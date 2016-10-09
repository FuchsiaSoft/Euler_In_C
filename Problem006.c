#include <stdio.h>

int main(){
    int sumOfSquares=0;
    int squareOfSums=0;
    int i;
    for(i=1;i<=100;i++){
        sumOfSquares+=(i*i);
        squareOfSums+=i;
    }
    squareOfSums*=squareOfSums;
    printf("Answer is: %d\n", (squareOfSums-sumOfSquares));
}
