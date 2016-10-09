#include <stdio.h>
#include <math.h>

int main() {
    int i=2;
    int primeCount=0;
    do{
       if(isPrime(i)){
          primeCount++;
       }
       i++; 
    }while(primeCount<10001);
    printf("Answer is: %d\n", i-1);
}

int isPrime(int n){
    int i;
    for(i=2;i<=floor(sqrt(n));i++){
        if(n%i==0) return 0;
    }
    return 1;
}
