//O. Omar Mejia Tinajero. Grupo: 9291. **Funci�n suma*** Abril de 2022.
#include <iostream>
using namespace std;
float adicion(float a, float b);    //Declaraci�n del prototipo de la funci�n para sumar.
int main () {
	float sumA, sumB, suma;                 //Declaraci�n de variables, sin asignaci�n.
	cout<<"Inserte dos sumandos:\n";
	cin>>sumA;                              //Entrada de valores por teclado.
	cin>>sumB;
	suma=adicion (sumA, sumB);  //Llamada a la funci�n, con transferencia por valor de a y b a sumA y sumB.
	                                    // Se asigna el retorno de la funci�n a suma.
	cout<<"La suma de los valores insertados es:\t" <<suma;  //Se imprime el resultado.
	return 0;
}
float adicion(float a,float b){            //Definici�n de la funci�n adici�n.
	return (a+b);
}
