#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#define lim 10
using namespace std;
struct Nodo {
    char dato [lim];
    Nodo* next;
};

void Push(Nodo *&, char*&);
void Pop(Nodo *&, char*&);

int main (){
    printf("Apilar 5 elementos y extraerlos.\n");
	Nodo*top = NULL;
    char dato [lim]; char* pd= dato;
	int cont = 1;
    do{
    printf("Inserte %i%c nombre:\t",cont++,248);
    gets(dato);
    Push(top,pd);
    }
    while (cont<6);
    cout << "Sacando ...\n";
    int i;
	while (top!=NULL){
    Pop (top, pd);
	    if (top!=NULL){
	    for(i=0;i<lim;i++){
	    printf("%s",dato[i]);
	    }
		} else {
	    puts(pd); std:: cout<< " Fin.";    
	    }
    }
return 0;
}

void Push(Nodo *&top, char* &d){
    Nodo *nodo = new Nodo();
    d = (char*)malloc(lim*sizeof(char));
    strcpy(nodo->dato,d);
    nodo->next = top;
    top = nodo;
    return;
    }

void Pop(Nodo *&top, char* &d) {
    Nodo* aux = top;
    d = (char*)malloc(lim*sizeof(char));
    strcpy(d,aux->dato);
    top = aux->next;
    delete aux;
    return;
    }

