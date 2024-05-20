/*	Ejercicio resuelto 5.1
	Escribir un programa que visualice un tri�ngulo is�sceles.
			*
	      * * *
	    * * * * *
	  * * * * * * *
	* * * * * * * * *	*/

#include <iostream>
using namespace std;
int main(){
	int num_lineas=5;
	char blanco=' ';
	char asterisco='*';
	
	cout<<endl;
	
	for (int fila =1; fila <= num_lineas; fila++){
		//Imprimir espacios en blanco
		for (int blancos = num_lineas-fila; blancos>0; blancos--)
			cout << blanco;
		
		for (int cuenta_as =1; cuenta_as < 2 * fila; cuenta_as++)
			cout << asterisco;
		
		cout << endl;	
	}
	return 0;
}

/*	Soluci�n
	El tri�ngulo is�sceles se realiza mediante un bucle externo 
	y dos bucles internos. Cada vez que se repite el bucle externo 
	se ejecutan los dos bucles internos. El bucle externo se repite
	cinco veces (cinco filas); el n�mero de repeticiones realizadas 
	por los bucles internos se basan en el valor de la variable
	fila. El primer bucle interno visualiza los espacios en blanco 
	no significativos; el segundo bucle interno visualiza uno o m�s
	asteriscos.
	El bucle externo se repite cinco veces, uno por l�nea o fila; 
	el n�mero de repeticiones ejecutadas por los bucles internos se 
	basa en el valor de fila. La primera fila consta de un asterisco 
	y cuatro blancos, la fila 2 consta de tres blancos y tres 
	asteriscos, y as� sucesivamente; la fila 5 tendr� 9 asteriscos 
	(2 � 5 � 1).
*/
