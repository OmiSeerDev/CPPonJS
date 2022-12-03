//Colas 13 de julio de 2022.//
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Nodo {
	float dato;
	Nodo* next;
};

void Enqueue(Nodo*&, Nodo*&, int);
void Dequeue(Nodo*&, Nodo*&, int &);
bool colaVacia(Nodo*);

int main (){
	Nodo *frente=NULL; 
	Nodo *fin=NULL;
	int dato, cont = 0;
	//Insertando elementos
	do {
		printf("Inserte el %i%c dato: \t",(cont+1),248);
		std::cin >> dato;
		Enqueue(frente, fin, dato);
		cont++;
	} while (cont<6);
	//Extrayendo elementos
	printf("Extrayendo...\n");
	while (frente!=NULL){
		Dequeue(frente, fin, dato);
		frente!=NULL? printf("[%i]",dato): printf ("[%i]. Fin.",dato);
	}
	
system ("pause");
return 0;
}

void Enqueue(Nodo*& frente, Nodo*& fin,int d){
	Nodo* aux = new Nodo ();
	aux->dato = d;
	aux->next = NULL;
	colaVacia(fin) ?	frente = aux : fin->next = aux;
	fin = aux;
	printf("Elemento:[%i] a%cadido a la cola.\n",d,164);
	return;
	}
	
void Dequeue(Nodo*& frente, Nodo*&fin, int &d){
	Nodo* aux = frente;
	d = frente->dato;
	frente==fin? frente = fin = NULL: frente = frente->next;
	delete aux;
	return;
}	
	bool colaVacia (Nodo *nodo){
		return (nodo==NULL)? true: false;
	}
