// if ifadesi
// kosul operat�rleri
#include <stdio.h>

// main fonk baslar
int main(void){
	int num1; // kullan�c�dan okunacak ilk deger
	int num2; // kullan�c�dan okunacak ikinci deger
	
	printf("Iki Sayi Girin ve aralarindaki iliskiyi verelim : ");
	scanf("%d%d",&num1,&num2); //girilen iki tam say�y� okuyoruz
	
	if(num1 == num2){
		printf("%d Esit %d\n",num1,num2);
	}
	if(num1 != num2){
		printf("%d Esit Degil %d\n",num1,num2);
	}
	if(num1 < num2){
		printf("%d Kucuktur %d\n",num1,num2);
	}
	if(num1 > num2){
		printf("%d Buyuktur %d\n",num1,num2);
	}
	if(num1 <= num2){
		printf("%d Kucuk veya Esittir %d\n",num1,num2);
	}
	if(num1 >= num2){
		printf("%d Buyuk veya Esittir %d\n",num1,num2);
	}	
	
}// main fonk biter
