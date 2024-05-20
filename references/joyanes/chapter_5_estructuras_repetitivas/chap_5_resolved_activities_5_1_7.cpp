/*	Actividades resueltas 5.17 
	Detecci�n de entradas num�ricas �enteros� err�neas.	*/

#include <iostream>
using namespace std;
int main(){
	int sw;
	float n;
	
	sw=0;
	
	while ( sw==0 ){
		cin >> n;
		
		if ( n!= int(n)){
			cout << "Dato no valido" <<endl
				 << "Ejecute nuevamente";
			sw=1;	
		}else{
			cout << "Correcto " << n << " es entero";
		}
	}
	
	return 0;
}

/*	Souci�n
	Este algoritmo es una aplicaci�n sencilla de �interruptor�. 
	Se sit�a el valor inicial del interruptor (SW = 0) antes de 
	recibir la entrada de datos. La detecci�n de n�meros no 
	enteros se realizar� con una estructura repetitiva mientras
	que se realizar� si SW = 0.
	La instrucci�n que detecta si un n�mero le�do desde el 
	dispositivo de entradas es entero:
	
		leer(N)
		
	Realizar� la comparaci�n de N y parte entera de N:
	� si son iguales, N es entero,
	� si son diferentes, N no es entero.
	
	Un m�todo para calcular la parte entera es utilizar la 
	funci�n est�ndar ent (int) existente en muchos lenguajes 
	de programaci�n.
*/
