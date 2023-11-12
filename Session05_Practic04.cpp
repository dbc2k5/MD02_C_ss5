#include<stdio.h>
int main(){
	float earnings,salary,tax;
	printf("Nhap so tien thu nhap: ");
	scanf("%d",&earnings);
	if (earnings<0){
		printf("So tien nhap khong hop le");
	}else if(0<earnings<=5000000){
		tax=0.05;
		float salary=earnings*tax;
	}else if(5000000<earnings<=10000000){
		tax=0.1;
		float salary=earnings*tax;
	}else if(10000000<earnings<=18000000){
		tax=0.15;
		float salary=earnings*tax;
	}else if(18000000<earnings<=32000000){
		tax=0.2;
		float salary=earnings*tax;
	}else if(32000000<earnings<=52000000){
		tax=0.25;
		float salary=earnings*tax;
	}else if(52000000<earnings<=80000000){
		tax=0.3;
		float salary=earnings*tax;
	}else{
		tax=0.35;
		float salary=earnings*tax;
	}
	printf("Thue cua ban la: %.0f%% \n",tax*100);
    printf("So tien luong nhan duoc la: %.2f",salary);
}
