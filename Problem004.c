#include <stdio.h>

int main() {
    int a, b;
    int largestPalindrome=0;
    for(a=100; a<1000; a++){
        for(b=a; b<1000; b++){
            if(isPalindrome(a*b) && (a*b) > largestPalindrome) {
                largestPalindrome = a*b;
            }
        }
    }
    printf("Answer is: %d\n", largestPalindrome);
}

int isPalindrome(int n) {
    int digitCount = countDigits(n);
    int forwardDigits[digitCount];
    int backwardDigits[digitCount];
    int i=digitCount-1;
    int j=0;
    do {
        forwardDigits[i]=n%10;
        backwardDigits[j]=n%10;
        n/=10;
        i--;
        j++;
    }while(n>0);
    int k;
    for(k=0;k<digitCount;k++) {
        if(forwardDigits[k] != backwardDigits[k]) return 0;
    }
    return 1;
}

int countDigits(int n) {
    int x = 0;
    do {
        n/=10;
        x++;
    }while(n>0);
    return x;
}
