// Ebob Ekok  
// Bulan Program 
// Kullan�c�dan iki say� al�yoruz ebobunu ve ekokunu yaz�yoruz
#include <stdio.h>

// main fonk ba�lar
int main(void){
	int x,y;
	int obeb,okek,sayac = 1;
	printf("iki tam sayi giriniz : ");
	scanf("%d%d",&x,&y);
	// OBEB (ORTAK B�LENLER�N EN B�Y���)
	/*
		obebde iki durum s�z konusu
		1-) Biri di�erinin kat� olan yani tam b�l�nen de�erlerde say�lardan k���k veya e�it olan (ebob) olur bu kolay olan�
		2-) Biri di�erine tam b�l�nmeye kat� olmayan durumlarda ge�erli olan yer zor olan k�s�m
			2-a) ikinci k�s�mda izleyece�imiz yol her iki say�dan b�y�k olan�n yar�s�na kadar d�nece�iz 
			2-b) ve her iki say�y�da b�len en b�y�k ayn� say� bize (obeb)'i verecek
	*/
	// 1-)
	if(x % y == 0){
		obeb = y;
	}
	else if(y % x == 0){
		obeb = x;
	}else{
		// 2-)
		if(x >= y){
			for(int i=1;i <= (x/2)+1;i++){
				if(x % i == 0 && y % i == 0){
					obeb = i;
				}
			}
		}
		else{
			for(int i = 1;i <= (y/2)+1;i++){
				if(x % i == 0 && y % i == 0){
					obeb = i;
				}
			}
		}
	}
	// OKEK (ORTAK KATLARIN EN K�����)
	/* 
		Ekoktada i�ler biraz daha kolay yapmam�z gereken �ey
		1-) Girilen iki say�y�da tam b�len ilk say� o iki say�n�n okekidir.
	*/
	// sonsuz d�ng�
	while(true){
		if(sayac % x == 0 && sayac % y == 0){
			okek = sayac;
			break;
		}
		sayac++;
	}
	printf("Obeb : %d\nOkek : %d",obeb,okek);
	
	
	
	
	
	
	
	
}// main fonk biter
