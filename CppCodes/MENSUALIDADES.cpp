//O. Omar Mejia Tinajero. Grupo 9291. **Mensualidades** abril de 2022
#include <stdio.h>

using namespace std;
const float deuda = 16000.00;             //Se asigna como variable inmutable la deuda
int anual = 12;                           //Se asigna el n�mero de meses del a�o, por pagar.
float interes = 0.24;                     //Se asigna el inter�s en formato float para evitar 24/100.
float mensualidades (float);
float mensualidades (float a,float b) {      //Definici�n de la funci�n que suma y sus par�metros.
	return (a/b)*(1+interes);
	
}
int main(void){
	printf("La deuda actual es de: $%.2f\n",deuda);     //Muestra la deuda y tasa de inter�s.
	printf("La tasa de inter%cs anual de %.2f%c\n",130, interes*100,37); 
	float pagos= mensualidades (deuda, anual);  //Se asigna el retorno de la funci�n de suma sobre los sumandos.
	printf("Quedando en 12 pagos de $%.2f ($%.2f + $%.2f)\n",pagos,deuda/anual,(deuda*interes)/anual);
		for (anual=1;anual<=12;anual++){             //Muestra en pantalla de los pagos de mensualidades+inter�s.
		printf("Pago %i de 12: $%.2f \n", anual,pagos);
		}
	printf("______________________\nMonto total: $%.2f",(interes*deuda)+deuda);	 //Muestra la suma total por pagar.
}

