/*LISTAS 14 julio de 2022.*/
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
struct Nodo {
    float dato;
    Nodo* next;
}*head, *ant;

void Start(Nodo*&); void recorre(Nodo*);
void Inserta(Nodo*&, Nodo*&, float&);
void elimina(Nodo*&, float ); void menu();

int main(){
  ant == NULL;
    menu ();
 return 0;
}

void Start(Nodo*& head){
    head = NULL;
    float dato; float co = 0;
	cout << "Inserte 5 decimales.\n";
	do{
	    cin >> dato;
	    Inserta(head, ant, dato);
	    co++;
	} while(co<=4);
	return;
}

void Inserta(Nodo *&head, Nodo *&ant, float &dato){
	Nodo* aux = new Nodo (); 
    aux->dato = dato;
    	
	if(ant==NULL){
	    aux->next = head;
		head = aux;
    } else {
    	aux->next = ant;
    	ant = aux;
    }
    aux = ant;
    printf("Se insert%c [%.2f] a la lista.\n",162, dato);
    return;
}

void recorre(Nodo *head){
	Nodo *actual = new Nodo();
	actual = head;
	while(actual != NULL){
		printf("[%.2f]\n",actual->dato);
		actual = actual->next;
	}	
	return;
}
	
void elimina(Nodo*&head, float dato){
	cout << "\nEliminando: "<< dato<<endl;
	Nodo* aux = new Nodo();
	Nodo *ant = NULL;
	if(head!=NULL) {
	aux = head;
	}
	while ((aux != NULL) && (aux->dato != dato)){
		ant = aux;
		aux = aux->next;
	}
	
	if (aux == NULL){
		cout << "No existe en esta lista.\n";
	}
	else if (ant == NULL){
		head = head->next;
		delete aux;
	} else {
		ant->next = aux->next;
		delete aux;	
	}
	return;
}

void menu(){
	char opc;
	cout <<"\t.::Creador de listas::.\n" << "A- Crear lista.\nB- Ver lista.\n";
	cout <<"C- Eliminar nodo.\nS- Salir.\n";
	cout << "Inserte letra: ";
	do {
		cin >> opc; toupper(opc); 
		switch (opc) {
			case 'A': Start(head); system("CLS"); main();
					 
			case 'B': cout << "La lista es...\n";
   				      recorre(head); system("pause"); main();
   			case 'C': float da; cin >> da; 
			   elimina (head, da); system("pause"); system("cls"); main();
		}
	} while (opc!='S');
	exit(-1);
	return;
}
