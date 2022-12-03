//O. Omar Mejia Tinajero. **Arbol binario** Programaci�n Grupo: EP01. julio 2022.
#include <stdlib.h>
#include <stdio.h>

struct nodo {				//Definiendo la estructura de los nodos del �rbol.
	struct nodo *padre;		//Puntero que indica el nodo padre.
	struct nodo *izq;		//Puntero hacia el nodo a la izquierda.
	struct nodo *der;		//Puntero hacia el nodo a la derecha.
	int valor;				//Dato contenido del nodo.
};
nodo *crear_Nodo(nodo*,int);    //Prototipos de funciones.
void agrega_valor (nodo*, int);
void MostrarArbol(nodo* arbol, int cont);

int main (){                           //Funci�n principal
	nodo* arbol;					//Inicializando nodo arbol.
	arbol = crear_Nodo (NULL,5);    //Creando el nodo ra�z con una funci�n.
	agrega_valor (arbol, 8);		//Agregando valores con otra funci�n, apuntando al arbol, 
	agrega_valor (arbol, 1);		 //apuntando al nodo arbol y almacenando un valor por copia.
	agrega_valor (arbol, 13);
	agrega_valor (arbol, 4);
	agrega_valor (arbol, 7);
	agrega_valor (arbol, 2);
	agrega_valor (arbol, 3);
	MostrarArbol(arbol, 0);
system ("pause");				//Pausa del sistema para ver los resultados. 
return 0;
}

nodo *crear_Nodo(nodo*padre, int valor){       //Funci�n para crear nodos.
	nodo *n = (nodo*)calloc(sizeof(nodo),1);   //Reservaci�n de espacio en memoria.
	n->padre= padre;				//Asigna el par�metro dado al campo padre del nuevo nodo.
	n->valor=valor;					//Asigna el par�metro dado al campo valor del nuevo nodo.
	return n ;                      //Su producto es un nodo.
}

void agrega_valor (nodo* arbol, int valor){ //Adiciona un valor a los nodos, y los acomoda.
	nodo *temp,*pivote;             //Variables auxiliares para la asignaci�n condicional.
	int derecho;				    //Variable que funciona como bandera o booleano.
	if (arbol != NULL){				//Valora si el nodo arbol no est� vac�o,
		temp = arbol;					//almacena el nodo arbol en el nodo temp,
		while (temp !=NULL){            //mientras el nodo est� lleno, 
			pivote = temp;              //almacena el nodo temp en el pivote,
			if (valor > temp->valor) {  //si el valor dado es mayor que el valor de temp.
			temp = temp->der;           //agrega el nodo al campo derecho de temp.
			derecho =1;                //derecho es verdadero (true),
			} else {                   
			temp = temp->izq;	       //de lo contrario el valor se asinga el lado izquierdo.
			derecho = 0;               //derecho es falso.
			}
		}
		
		temp=crear_Nodo(pivote,valor);  //Despu�s de evaluar d�nde inserta el nodo, lo crea.
		if (derecho) {                  //si se inserta a la derecha despliega un mensaje.
			printf("Insertando %i del lado derecho de %i.\n",valor,pivote->valor);
			pivote->der = temp;	        // almacena temp en el puntero derecho de pivote
		} else {
			printf("Insertando %i del lado izquierdo de %i.\n",valor,pivote->valor);
			pivote->izq = temp;        //almacena temp en el puntero izquierdo de pivote.
		}
	} else {          //Si el nodo �rbol est� vac�o , no ha sido inicializado. 
		printf("Error, el %crbol no ha sido inicializado",160);
	}
}

void MostrarArbol(nodo* arbol, int cont){
    if(arbol == NULL) {
    return;
    } else {
    MostrarArbol(arbol->der, cont+1);
    for (int i=0; i<cont;i++){
        printf(" ");
    }
    printf("%i\n",arbol->valor);
    MostrarArbol(arbol->der, cont+1);
    }
    return;
}
