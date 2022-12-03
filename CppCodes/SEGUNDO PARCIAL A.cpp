//O. Omar Mejia Tinajero. Grupo 9291. *Segundo Examen Parcial A*
#include <stdlib.h>
#include <iostream> 		 ///Archivos de cabecera
#include <stdio.h>

using namespace std; 
void No_Decimal(float a [], int b[], int limB);      //Prototipos de funciones.
int suma1(int*x,int*y);
int suma2(int*z,int*w);

int main () {                   //Título y petición de valores de entrada
 cout<<"Producto de dos sumas\n*******\n"; printf("Ingrese 4 n%cmeros enteros\n",163);
float ar1 [4]; int limA=4;              //Primer array que admite valores float.
for (int j=0;j<limA;j++){
	cin>> ar1[j];                    //Ingreso de valores al primer array.
}
int ar2[4];                //Segundo array que acepta sólo int, no modificable por el usuario.
No_Decimal(ar1,ar2,4);    //Llamada a la función que elimina decimales.
printf("Operando . . . (%i+%i)*(%i+%i)\n",ar2[0],ar2[1],ar2[2],ar2[3]); //Despliegue de la operación.
printf("El producto de %i por %i es igual a:\t",suma1(&ar2[0],&ar2[1]), suma2(&ar2[2],&ar2[3]));
int producto = suma1(&ar2[0],&ar2[1])*suma2(&ar2[2],&ar2[3]);    //Cálculo del resultado.
cout<<producto;												   //Imprime el resultado.
return 0;                                                //Fin de la función principal.
}
void No_Decimal(float a [], int b[], int limB){        //Función que elimina decimales
	for (int i;i<limB;i++) {                         //Transfiere los datos del arreglo float al
		b[i]=a[i];                                   //arreglo int, así elimina los decimales.
	}
	printf("Si se usaron decimales, estos fueron retirados\n");
	for (int i=0;i<limB;i++){                     //Rescata el arreglo int y lo imprime ordenadamente.
		printf("%i\t",b[i]);
	} 
	system ("pause");                    //Pausa del sistema antes de operar.
}

int suma1 (int*x,int*y){                       //Suma dos elementos para tener el primer producto.
	return *x+*y;                                //mediante el uso de punteros desde el arreglo 2.
}

int suma2 (int*z,int*w){                       //Suma dos elementos para tener el segundo producto.
	return *z+*w;	                             //mediante el uso de punteros desde el arreglo 2.
}

