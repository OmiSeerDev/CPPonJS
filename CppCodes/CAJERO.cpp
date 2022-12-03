//O. Omar Mejia Tinajero. Grupo 9291. **Cajero**
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
double saldo = 27918.00;
char yesno;
int opc;
void interfaz() {
printf("Men%c Principal\n \n1- Dep%csitos\n2- Retiros\n3- Consulta\n4- Salir\n",163,162);
printf("\n Presione un n%cmero para seleccionar una opci%cn\n",163,162);
}
void Depo (){
	printf("Dep%csitos\n_______________\nDigite la cantidad que desea depositar\n",162);
	float Dep_Quant;
	scanf("%f",&Dep_Quant);
	saldo=saldo+Dep_Quant; printf("Dep%csito realizado con %cxito\n",162,130);
	printf("Saldo actual: %.2f pesos\n", saldo);
	printf("%cDesea hacer otro%c Y/N \n",168,63); cin>>yesno;
	if (yesno=='Y'||yesno=='y') {
		Depo();
	} else if (yesno=='N'||yesno=='n') {
		interfaz();
	} 
	}
void Cons(){
	printf("Consulta de saldo\n________________\n Su saldo es de: %.2f pesos\n",saldo);
}	
void Reti(){
	printf("Retiros\n_______________\nDigite la cantidad que desea retirar\n");
	float Ret_Quant;
	scanf("%f",&Ret_Quant);
	if (Ret_Quant>saldo) {
	printf("Fondos insuficientes. Intente de nuevo\n\a");Cons();system ("pause"); interfaz();
	} else { saldo=saldo-Ret_Quant; printf("Retire su efectivo\nSaldo disponible: %.2f pesos.\n",saldo);
	
	system("pause");
		interfaz();
	}
}
int main () {
interfaz();
scanf("%i",&opc);
switch (opc){
	case 1: Depo(); system("CLS");main(); break;
	case 2: Reti(); system("CLS");main(); break;
	case 3: Cons(); system("pause"); system ("CLS"); main(); break;
	case 4: printf("Transacci%cn finalizada. Retire su tarjeta.",162);return 0; break;
	default: cout<<"Error al seleccionar. Intente nuevamente.\n"; main(); break;
}
}

