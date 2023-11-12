#include<stdio.h>
int main(){
	float a,b,c;  //a= doanh thu dai ly ban hang, b= % so hoa hong nhan duoc, c= tien luong
	printf("Nhap doanh thu dai ly ban hang: ");
	scanf("%f",&a);
	if (0<a<=100000000){
		b=0.05;
		printf("So tien luong cua dai ly la: %.2f vnd",c=a*b);
	}else if (100000000<b<=300000000){
		b=0.1;
		printf("So tien luong cua dai ly la: %.2f vnd",c=a*b);
	}else if (300000000<b){
		b=0.2;
		printf("So tien luong cua dai ly la: %.2f vnd",c=a*b);
	}else{
		printf("So doanh thu nhap khong hop ly");
	}
}
