// �emberin �evresi ve alan�n� bulan program
// �emberin yar��ap�n� kullan�c�dan alal�m 
// pi = 3,14159 sabit olarak alaca��z
// alan = pi * r^2   cevre = 2*pi*r
#include <stdio.h>


// main fonk ba�lar
int main(void){
	const float PI = 3.14159; // pi sabitini olu�turduk ve �imdi istesek de de�i�tiremeyiz
	float yaricap;
	printf("Cemberin Yaricapini Girin : ");
	scanf("%f",&yaricap);
	printf("alan : %f\n",PI*yaricap*yaricap);
	printf("cevre : %f\n",2*PI*yaricap);
	
}
