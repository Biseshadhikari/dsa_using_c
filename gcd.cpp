#include<stdio.h>
int main(){
	int a,b,x,gcd;
	printf("Enter the numbers");
	scanf("%d%d",&a,&b);
	if(a>b){
		x = b;
		
	}
	else{
		x = a;
	}
	for(int i =0;i<=x;i++){
		if(a%i==0&&b%i==0){
			gcd = i;
		}
	}
	printf("%d is the gcd",gcd);
}
