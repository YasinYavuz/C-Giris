//
// Kullan�c�dan iki say� isteyelim ve 4 i�lem yapal�m
#include <stdio.h>

// main fonk ba�lar
int main(void){
	
	int num1,num2,toplama,cikarma,carpma,bolme;
	printf("iki tam sayi girin : ");
	scanf("%d%d",&num1,&num2);// kullan�c�dan iki tam say� al�yoruz
	toplama = num1 + num2;// toplama i�lemi
	cikarma = num1 - num2;// cikarma islemi
	carpma  = num1 * num2;// carpma islemi
	bolme   = num1 / num2;// tam say� b�lmesi
	printf("Toplama : %d\n",toplama);
	printf("Cikarma : %d\n",cikarma);
	printf("Carpma  : %d\n",carpma);
	printf("Bolme   : %d\n",bolme);
	
}// main fonk biter

