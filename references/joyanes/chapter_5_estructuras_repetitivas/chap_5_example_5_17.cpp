/*	Ejemplo 5.17
	Calcular el factorial de n n�meros le�dos del terminal	*/

#include <iostream>
using namespace std;
int main(){
	int n, num; 
	double fact;
	int i;
	
	cout<<"Ingrese la cantidad de numeros: ";
	cin>>n;
	
	for (i=1;i<=n;i++){
		cout<<"Ingrese numero: ";
		cin>>num;
		
		fact=1;
		
		for (int j=1;j<=num;j++){
			fact=fact*j;
		}
		cout<<"El factorial del numero es: "<<fact<<endl;
	}
	return 0;
}

/*	Soluci�n
	El problema consistir� en realizar una estructura repetitiva de n iteraciones 
	del algoritmo del problema ya conocido del c�lculo del factorial de un entero
*/
