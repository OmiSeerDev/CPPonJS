//O. Omar Mejia Tinajero. Grupo: 9291. **Función suma*** Abril de 2022.
#include <iostream>
using namespace std;
float adicion(float a, float b);    //Declaración del prototipo de la función para sumar.
int main () {
	float sumA, sumB, suma;                 //Declaración de variables, sin asignación.
	cout<<"Inserte dos sumandos:\n";
	cin>>sumA;                              //Entrada de valores por teclado.
	cin>>sumB;
	suma=adicion (sumA, sumB);  //Llamada a la función, con transferencia por valor de a y b a sumA y sumB.
	                                    // Se asigna el retorno de la función a suma.
	cout<<"La suma de los valores insertados es:\t" <<suma;  //Se imprime el resultado.
	return 0;
}
float adicion(float a,float b){            //Definición de la función adición.
	return (a+b);
}
