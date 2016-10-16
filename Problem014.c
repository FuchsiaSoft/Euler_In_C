#include <stdio.h>

int main(){
	int i;
	unsigned long count=0;
	int highestStart = 0;
	unsigned long longestCount = 0;
	for(i=1;i<1000000;i++){
		count = 0;
		unsigned long n=i;
		while(n!=1){
			if(n%2==0){
				n/=2;
			}
			else{
				n=n*3+1;
			}
			count++;
		}
		if(count>longestCount){
			longestCount = count;
			highestStart = i;
		}
	}
	printf("Answer is: %d\n",highestStart);
}
