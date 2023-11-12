#include<stdio.h>
int main(){
	int day, month;
	printf("Nhap ngay va thang cua ban: ");
	scanf("%d %d", &day, &month);
	if(day>=21 && month==3||day<=20 && month==4){
		printf("Ban la cung Bach Duong");
	}else if(day>=21&&day<=31 && month==4||0<day<=20 && month==5){
		printf("Ban la cung Kim Nguu");
	}else if(day>=21&&day<=31 && month==5||0<day<=21 && month==6){
		printf("Ban la cung Song Tu");
	}else if(day>=22&&day<=31 && month==6||0<day<=22 && month==7){
		printf("Ban la cung Cu Giai");
	}else if(day>=23&&day<=30 && month==7||0<day<=22 && month==8){
		printf("Ban la cung Su Tu");
	}else if(day>=23&&day<=31 && month==8||0<day<=22 && month==9){
		printf("Ban la cung Su Nu");
	}else if(day>=23&&day<=30 && month==9||0<day<=23 && month==10){
		printf("Ban la cung Thien Binh");
	}else if(day>=24&&day<=31 && month==10||0<day<=22 && month==11){
		printf("Ban la cung Bo Cap");
	}else if(day>=23&&day<=31 && month==11||0<day<=21 && month==12){
		printf("Ban la cung Nhan Ma");
	}else if(day>=22&&day<=30 && month==12||0<day<=19 && month==1){
		printf("Ban la cung Ma Ket");
	}else if(day>=20&&day<=31 && month==1||0<day<=18 && month==2){
		printf("Ban la cung Bao Binh");
	}else if(day>=19&&day<=29 && month==2||0<day<=20 && month==3){
		printf("Ban la cung Song Ngu");
	}
}						
