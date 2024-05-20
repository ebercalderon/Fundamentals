/*	Ejemplo 5.16
	Se conoce la poblaci�n de cada una de las veinticinco ciudades m�s grandes de las ocho provincias de 
	Andaluc�a y se desea identificar y visualizar la poblaci�n de la ciudad m�s grande de cada provincia.	*/

#include <iostream>
using namespace std;
int main(){
	int i, j, n;	//contador de provincias(i) y ciudades(j)
	int mayor, ciudad;	//ciudad de mayor poblaci�n - poblaci�n de la ciudad
	
	i=1;
	
	while (i<=8){
		mayor=0;
		j=1, n=1;
		while (j<=25){
			cout<<"Ingrese la poblacion de la ciudad ["<<n<<"]:";
			cin>>ciudad;
			if (ciudad > mayor)
				mayor=ciudad;
			
			j++;
			n++;
		}
		cout<<"La ciudad mayor es: "<<mayor<<endl;
		i++;
	}
	return 0;
}

/*	Soluci�n
	El problema consistir�, en primer lugar, en la obtenci�n de la poblaci�n mayor de cada provincia y realizar 
	esta operaci�n ocho veces, una para cada provincia.	
		1. Encontrar y visualizar la ciudad mayor de una provincia.
		2. Repetir el paso 1 para cada una de las ocho provincias andaluzas.
	El procedimiento para deducir la ciudad m�s grande de entre las veinticinco de una provincia se consigue creando 
	una variable auxiliar MAYOR �inicialmente de valor 0� que se va comparando sucesivamente con los veinticinco 
	valores de cada ciudad, de modo tal que, seg�n el resultado de comparaci�n, se intercambian valores de la ciudad
	por el de la variable MAYOR
*/
