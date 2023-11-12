#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so nguyen a, b, c: ");
	scanf("%d %d %d",&a,&b,&c);
	float denta,x,x1,x2;
	denta=b*b-4*a*c;
	if (denta==0){
		x=x1=x2=-b/(2*a);
		printf("Phuong trinh co 2 nghiem kep x1 = x2 = %.2f",x);
	}else if(denta>0){
		x1=(-b+sqrt(denta))/2*a;
		x2=(-b-sqrt(denta))/2*a;
		printf("Phuong trinh co 2 nghiem x1 = %.2f va x2 = %.2f",x1,x2);
	}else{
		printf("Phuong trinh vo nghiem");
	}
}
