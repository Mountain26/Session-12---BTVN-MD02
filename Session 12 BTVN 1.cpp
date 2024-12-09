#include <stdio.h>

int tinhTong(int a, int b){
	return a+b;
}
int main() {
	int a;
	int b; 
	printf("Moi ban nhap vao gia tri so thu nhat: ");
	scanf("%d", &a);
	printf("Moi ban nhap vao gia tri so thu hai: ");
	scanf("%d", &b); 
 	printf("Gia tri cua tong hai so ban nhap la: %d", tinhTong(a,b)); 
  return 0;
}
