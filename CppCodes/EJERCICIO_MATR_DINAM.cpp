
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>

using namespace std;
void Insert_matx();

int **dinMatx; int lim=2;
	
void Show_matx(int**,int);

int main (){
	int a;
	printf("Ingrese 4 d%cgitos para 2 matrices\n.",161);
	Insert_matx();
	Show_matx(dinMatx,lim);
	
	for (int i=0;i<lim;i++){
		delete [] dinMatx[i];
	}
	delete [] dinMatx;
	
	for (int i=0;i<lim;i++){
		for (int j=0;j<lim;j++){
		printf("%i",&dinMatx[i][j]);
		}
	}
	getch();
}

void Insert_matx(){
	int lim=2;
	
	dinMatx=new int*[lim];
	for (int i=0;i<lim;i++) {
		dinMatx[i]=new int[lim];
	}
	
	for (int k=0;k<lim;k++){
	for(int j=0;j<lim;j++){
	printf("\nPosici%cn [%i][%i]",162,k,j);
	scanf("%i",(dinMatx+k)+j);
	}
	}
}
