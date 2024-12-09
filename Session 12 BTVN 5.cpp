#include<stdio.h>
int check(int n){
	int count=0;
	if(n<=1){
		return 0; 
	} 
	for(int i=1;i<=n;i++){
		if(n%i==0) {
			count ++;
		}
	}
	return (count ==2); 
} 
int main(){
	int number1,number2; 
	int count; 
	printf("Moi ban nhap vao so nguyen thu nhat:");
	scanf("%d",&number1);
	printf("moi ban nhap vao so nguyen thu hai:");
	scanf("%d",&number2); 
	if(check(number1)){
		printf("%d la so nguyen to\n",number1); 
		 
	}else{
		printf("%d khong phai la so nguyen to\n",number1); 
	}
	if(check(number2)){
		printf("%d la so nguyen to\n",number2); 
	}else{
		printf("%d khong phai la so nguyen to\n",number2); 
	}
	return 0; 
} 
