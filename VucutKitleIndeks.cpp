// V�cut Kitle �ndeksi : Kilonuzun boyunuzun karesine b�l�m�yle ��kan de�ere g�re kilolu olup olmad���n�z� bulur
/*
	VK� = kilo / (boy)*(boy)
	VK� < 18.5 => Zay�fs�n
	VK� >= 18.5 ve 24.9 => Normalsin
	VK� >= 25 ve 29.9 => Kilolusun
	VK� >= 30 => Obezsin 
*/
#include <stdio.h>

// main fonk baslar
int main(void){
	float kilo,boy;
	float indeks;
	printf("Kilonuzu Girin (ornek : 80) : ");
	scanf("%f",&kilo);
	printf("Boyunuzu Girin (ornek : 1.7) : ");
	scanf("%f",&boy);
	indeks = kilo / (boy * boy);
	if(indeks < 18.5){
		printf("Zayifsin");
	}else if(indeks >= 18.5 && indeks < 25){
		printf("Normal");
	}else if(indeks >= 25 && indeks < 30) {
		printf("Kilolusun");
	}else{
		printf("Obezsin");
	}
	
	
}// main fonk biter
