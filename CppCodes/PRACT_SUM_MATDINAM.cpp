#include <iostream>
#include <conio.h>
#include <stdlib.h>
int **Mtx_p, **Mtx_q, nF=2, nC=2;
void AskData ();
void ShowMat(int **, int, int);
void MatSum(int**, int**, int, int);
void ShowSum(int**, int, int);
using namespace std;
int main (){
	AskData();
	MatSum(Mtx_p, Mtx_q, nF, nC);
 	ShowSum(Mtx_p, nF, nC);
 	for (int i=0;i<nF;i++){
		delete[] Mtx_q;
	}
	delete [] Mtx_q;
	for (int i=0;i<nF;i++){
		delete[] Mtx_p;
	}
	delete [] Mtx_p;
system ("pause");
return 0;
}

void AskData (){
	Mtx_p = new int *[nF];
	for (int i=0;i<nF;i++){
		Mtx_p[i] = new int [nC];
	}
	cout << "Zahlen der erste Matrix\n";
	for (int b=0;b<nF;b++){
		for (int j=0;j<nC;j++){
			cout << "Zahl in ["<<b<<"]["<<j<<"]:";
			cin >> Mtx_p [b][j];
		}
	}
	Mtx_q = new int *[nF];
	for (int i=0;i<nF;i++){
		Mtx_q[i] = new int [nC];
	}
	cout << "Zahlen der zweite Matrix\n";
	for (int b=0;b<nF;b++){
		for (int j=0;j<nC;j++){
			cout << "Zahl in ["<<b<<"]["<<j<<"]: ";
			cin >> Mtx_q [b][j];
		}
	}
}

void ShowMat(int **Mat, int nF, int nC){
	for (int b=0;b<nF;b++){
		cout << "\n";
		for (int j=0;j<nC;j++){
			cout << Mtx_p [b][j]<<" ";
		}
	} cout << endl;
}

void MatSum(int**Mat1, int** Mat2, int nF, int nC){
	for (int i=0;i<nF;i++){
		for (int j=0;j<nC;j++){
		Mat1 [i][j]+=Mat2[i][j];
		}
	}
}

void ShowSum(int** Mat1, int nF, int nC){
	cout << "Die Sum der Matrix ist = ";
	for (int i=0;i<nF;i++){
		cout << "\n";
		for (int j=0;j<nC;j++){
		cout << Mat1 [i][j]<<" ";
		}
	} cout << endl;
}
