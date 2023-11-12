#include<stdio.h>
int main(){
	int a,b,c,d,fee; //a=so phut nghe trong thang, b=phi nghe theo cac moc, c=phi thue bao hang thang, d= tien cuoc dien thoai, 
	printf("Nhap so phut ban goi trong 1 thang: ");
	scanf("%d",&a);
	c=25000;
	if (a<=0){
		printf("So phut ban nhap khong hop le");
	}else if (0<a<=50){
		b=600;
		printf("So tien thang nay ban phai tra la: %d",d=b*a+c);
	}else if (50<a<=200){
		b=400;
		printf("So tien thang nay ban phai tra la: %d",d=50*600+(a-50)*400+c);
	}else if (200<a<=400){
		b=200;
		printf("So tien thang nay ban phai tra la: %d",d=50*600+150*400+(a-200)*200+c);
	}else if (400<a){
		b=100;
		printf("So tien thang nay ban phai tra la: %d",d=50*600+150*400+200*200+(a-400)*100+c);
	}
}
