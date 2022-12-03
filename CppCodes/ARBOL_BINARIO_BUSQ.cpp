#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Nodo {
    char dato;
    Nodo* padre;
    Nodo* izq;
    Nodo* der;
};

Nodo *CrearNodo (Nodo*, int);
void InsertaNodo(Nodo *, int);
void Mostrar(Nodo*,int);
void menu();

Nodo* arbol = NULL; int d, cont=0;

 int main (void) {
    arbol = CrearNodo(NULL,5);
    menu();
    return 0;
}

Nodo *CrearNodo (Nodo* arbol, int dato){
    Nodo* nodo = new Nodo();
    nodo->padre = arbol;
    nodo->dato = dato;
    return nodo;
}

void InsertaNodo(Nodo *arbol, int dato){
    Nodo *aux , *piv;
    bool EsIzquierdo;
    if (arbol != NULL){
        aux = arbol;
    while (aux != NULL) {
        piv = aux;
        if (dato > aux->dato){
            aux = aux->izq;
            EsIzquierdo = true;
        } else {
            aux = aux->der;
            EsIzquierdo = false;
        }
    }
    aux = CrearNodo(piv, dato);
    if (EsIzquierdo){
        printf("Valor [%i] introducido a la izquierda de %i.",dato, piv->dato);
        piv->izq = aux;
    } else {
        printf("Valor [%i] introducido a la derecha de %i.",dato, piv->dato);
        piv->der = aux;
    };
    } else {
    printf("El arbol no existe.");
    }
return;
}

void Mostrar(Nodo* piv, int cont){
    
    if (piv!=NULL){
        Mostrar(piv->izq,cont+1);
        for (int i= 0; i < cont; i++){
            printf("\t");
        }
        printf("%i\n",piv->dato);
        Mostrar(piv->der,cont+1);
    }
    if(arbol==NULL){
        return;
    }
}

void menu(){
   int opc;
    printf ("\t|||%cRBOL|||\n",181);
    printf("1. Insertar nodo.\n2. Mostrar %crbol.\n5. Salir.\n",160);
    do{
        cout << "Inserte opcion: \n";
        cin >> opc;
        switch (opc){
            case 1: cout << "Inserte valor:\t"; d = rand()%20;
                InsertaNodo(arbol, d);
            break;
            case 2: Mostrar(arbol,cont);
            
        };
    } while (opc!=5);
}