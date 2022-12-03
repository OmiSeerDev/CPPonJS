#include <iostream>
#include <stdlib.h>
#include <string.h>
#define max 10

using namespace std;
typedef struct No{
	struct No*next;
	char *name[max];
}No1;
No1* top = NULL;

void push (No*);
No* pop ();

int main (){
	No* n = new No();
	No* m = new No(); 
	No* l = new No(); 
	No* k = new No();
	
	scanf("%s",*n->name);
	scanf("%s",&m->name);
	scanf("%s",&l->name);
	scanf("%s",&k->name);
	push(n); push(m);push(l);push(k);
	
	No* i = pop();
	while (i!=NULL){
		printf("%s\n",i->name);
		i = pop();
	}
	delete [] n;	delete [] m;
	delete [] l;	delete [] k;
	
	system("pause");
	return 0;
}

void push(No* No1){
	No1->next=NULL;
	if (top == NULL) {  /*Pila vacía*/
		top = No1;
	} else {
		No1->next = top;
		top = No1;
	}
}

No* pop(){
	if(top==NULL){
		return NULL;
	} else {
		No* NoRet = top;
		top = NoRet->next;
		return NoRet;
	}
}

