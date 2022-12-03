#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;
struct Nodo {
    char dato [10];
    Nodo* izq;
    Nodo* der;
};

Nodo *CrearNodo (char*);
void InsertaNodo(Nodo *&, char* dato[10]);

int main () {
    Nodo* arbol = NULL;
    cout << "Nodo padre: ";
    char* d[10]; 
    std::cin >> d;
    InsertaNodo(arbol, d);
    cin >> d;
    InsertaNodo(arbol, d);
    cin >> d;
    InsertaNodo(arbol, d);
    return 0;
}

Nodo *CrearNodo (char* dato[10]){
    Nodo* nodo = new Nodo();
    gets(dato);
    nodo->dato = dato;
    nodo->izq = NULL;
    nodo->der = NULL;
    return nodo;
}

void InsertaNodo(Nodo *&arbol, char* dato[10]){
    if (arbol == NULL){
        Nodo *nodo_nuevo = CrearNodo(dato);
        arbol = nodo_nuevo;   
    } else {
        char* dato_raiz;
		dato_raiz = arbol->dato;
        int band = strcmp(dato,dato_raiz);
		if (band > 0){
            InsertaNodo(arbol->izq, dato);
            cout<< "Insertado ["; printf("%s",dato);cout << "] a la izquierda.\n";
        }  else if (band<= 0) {
            InsertaNodo(arbol->der, dato);
            cout<< "Insertado ["; printf("%s",dato); cout << "] a la derecha.\n";
        }
	}
    return;
}
