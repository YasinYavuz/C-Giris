//
// Toplama Program�
# include <stdio.h>

// main fonk ba�lar
int main(void){
	int integer1;//kullan�c�dan al�nan ilk de�i�ken
	int integer2;//kulla�c�dan al�nan ikinci de�i�ken
	int sum;// girilen de�erlerin toplam�n� tutan de�i�ken
	
	printf("Birinci Sayi : ");
	scanf("%d",&integer1);
	
	printf("Ikinci Sayi : ");
	scanf("%d",&integer2);
	
	sum = integer1+integer2;
	printf("Sayilarin Toplami : %d",sum);
}// main fonk biter
