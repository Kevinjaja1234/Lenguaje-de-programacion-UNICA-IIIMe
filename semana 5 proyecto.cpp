#include <iostream>
#include <math.h>
using namespace std;

// variables publicas
int n,c,a,N, opcion, Suma;

int main()
{
	do
	{
	cout<<"1: Verificacion de Equilibrio en un Sistema de Fuerzas en 2D \n";
    cout<<"2: Clasificacion de Estructuras Según Fuerzas y Restricciones \n";
    cout<<"3: Calculo de Reacciones en una Viga Simplemente Apoyada \n";
    cout<<"4: Calculo del Centroide de un Triángulo en 2D \n";
	cout<<"   Ingrese una opcion diferente de <0>: "; cin>>opcion;
	switch (opcion)
	{
	  case 1:
		{
		 
		 int n;
         double sumX = 0, sumY = 0, Fx, Fy;

    cout << "Ingrese el número de fuerzas: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        cout << "Ingrese Fx y Fy para la fuerza " << i << ": ";
        cin >> Fx >> Fy;
        sumX += Fx;
        sumY += Fy;
        i++;
    }

    if (sumX == 0 && sumY == 0) {
        cout << "El sistema está en equilibrio." << endl;
    } else {
        cout << "El sistema NO está en equilibrio." << endl;
    }
		 
		}; break;// fin caso 1
		
		case 2:
		 {
		 	
		 	int fuerzas, restricciones;

             cout << "Ingrese el número de fuerzas: ";
             cin >> fuerzas;

             cout << "Ingrese el número de restricciones: ";
             cin >> restricciones;

    switch (restricciones - fuerzas) {
        case 0:
            cout << "La estructura es estáticamente determinada." << endl;
            break;
        case 1:
            cout << "La estructura es inestable." << endl;
            break;
        default:
            cout << "La estructura es estáticamente indeterminada." << endl;
    }
          
		 }; break;// fin caso 2

       case 3:
		 {
		 	
		double longitud, fuerza, posFuerza, reaccionA, reaccionB;

         cout << "Ingrese la longitud de la viga: ";
         cin >> longitud;

         cout << "Ingrese la magnitud de la fuerza: ";
         cin >> fuerza;

          cout << "Ingrese la posición de la fuerza desde el apoyo izquierdo: ";
         cin >> posFuerza;

    if (posFuerza > 0 && posFuerza < longitud) {
        reaccionB = (fuerza * posFuerza) / longitud;
        reaccionA = fuerza - reaccionB;

        cout << "Reacción en el apoyo A: " << reaccionA << endl;
        cout << "Reacción en el apoyo B: " << reaccionB << endl;
    } else {
        cout << "La posición de la fuerza no es válida." << endl;
    }
          
		 }; break;// fin caso 3

       case 4:
		 {
		 	
		 	double x1, y1, x2, y2, x3, y3, cx, cy;
            char continuar;

    do {
        cout << "Ingrese las coordenadas del vértice 1 (x1, y1): ";
        cin >> x1 >> y1;

        cout << "Ingrese las coordenadas del vértice 2 (x2, y2): ";
        cin >> x2 >> y2;

        cout << "Ingrese las coordenadas del vértice 3 (x3, y3): ";
        cin >> x3 >> y3;

        cx = (x1 + x2 + x3) / 3.0;
        cy = (y1 + y2 + y3) / 3.0;

        cout << "El centroide del triángulo es: (" << cx << ", " << cy << ")" << endl;

        cout << "¿Desea calcular otro centroide? (s/n): ";
        cin >> continuar;

       } while (continuar == 's' || continuar == 'S');
          
		 }; break;// fin caso 4
		 
		 
	}// fin sw
	
} while(opcion!=0);// fin  del whilw principal
	return 0;
}
