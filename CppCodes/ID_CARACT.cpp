//O. Omar Mejia Tinajero. Grupo 9291. **Identificador de caracteres**

#include <iostream>
#include <ctype.h>
using namespace std;
int main () {
	char a;
	printf("Inserte un caracter para identificar si es letra o n%cmero\n",163);
	cin>>a;
	if (isalpha(a)) {
		cout<<"Letra";
		} else if (isdigit(a)) {
			printf("Es un n%cmero",163);	
		} else{
			printf("Es un s%cmbolo",161);
		}
}

