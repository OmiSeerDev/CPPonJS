//Pilas 12 de julio de 2022.
#include <iostream>
#include <iostream>
#include <stdlib.h>

struct Nodo {
    int dato;
    Nodo* next;
};

void Push(Nodo *&, int);
void Pop(Nodo *&, int& );

int main (){
    std::cout << "Apilar 5 elementos y extraerlos.\n";
	Nodo*top = NULL;
    int dato; int cont = 1;
    do{
    printf("Inserte %i%c numero:\t",cont++,248);
    scanf("%i",&dato);
    Push(top,dato);    
    }
    while (cont<6);
    std::cout << "Sacando ...\n";
    
	while (top!=NULL){
    Pop (top, dato);
	    if (top!=NULL){
	    printf("[%i]",dato);
	    } else {
	    std::cout << " Fin.";    
	    }
    }
return 0;
}

void Push(Nodo *&top, int d){
    Nodo *nodo = new Nodo();
    nodo->dato = d;
    nodo->next = top;
    top = nodo;
    printf("Los elemento: [%i], ha sido agregado a la pila.\n",d);
    return;
    }

void Pop(Nodo *&top, int &d) {
    Nodo* aux = top;
    d = aux->dato;
    top = aux->next;
    delete [] aux;
    return;
    }

