/*	Actividades resueltas 5.1
	Calcular el factorial de un n�mero N utilizando la estructura desde.	*/

#include <iostream>
using namespace std;
int main(){
	int num;
	double fact=1;
	
	cout << "Ingrese el numero a evaluar: ";
	cin >> num;
	
	for ( int i=1; i<=num; i++)
		fact=fact*i;
	
	cout <<"El factorial es: " << fact;
	return 0;
}

/*	Soluci�n
	Recordemos que factorial de N responde a la f�rmula
	N! = N � (N � 1) � (N � 2) � (N � 3) � ... � 3 � 2 � 1 	

*/
