// Kullan�c�dan al�nan say�n�n 
// tek veya cift oldugunu s�yleyen program
#include <stdio.h>

// main fonk ba�lar
int main(void){
	int girilenSayi;
	printf("Bir sayi girin : ");
	scanf("%d",&girilenSayi);
	if(girilenSayi % 2 == 0){
		printf("Girilen Sayi : %d cift bir sayidir.",girilenSayi);
	}
	else{
		printf("Girilen Sayi : %d tek bir sayidir.",girilenSayi);
	}
}// main fonk biter
