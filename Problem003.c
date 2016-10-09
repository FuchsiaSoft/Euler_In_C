#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long x = 600851475143UL;
    unsigned long long largestPrime = 1;
    unsigned long long i;
    for(i=2;i<sqrt(x);i++){
        if(x%i==0){
            unsigned long long a = i;
            unsigned long long b = x/i;
            if(isPrime(a) && a>largestPrime) largestPrime=a;
            if(isPrime(b) && b>largestPrime) largestPrime=b;            
        }
    }
    printf("Answer is: %llu\n", largestPrime);
}

int isPrime(unsigned long long n) {
    unsigned long long i;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}


