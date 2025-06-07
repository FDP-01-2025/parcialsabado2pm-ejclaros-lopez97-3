#include <iostream>
using namespace std;
int main (){

    int opcionEstacion; 
     
        cout << "--- Estaciones del año --- " << endl;
        cout << " Primavera " << endl;
        cout << " Verano " << endl; 
        cout << " Otoño " << endl; 
        cout << " Invierno " << endl; 
        cout << " ESCRIBA UN NUMERO DEL 1-4 PARA MOSTRAR UNA ESTACION DEL AÑO "<< endl; 
        cin >> opcionEstacion;

    switch (opcionEstacion){

        case 1: 
        cout << " Has elegido PRIMAVERA. Gracias por usar el programa. " << endl; 
            break;

        case 2: 
        cout << " Has escogido VERANO. Gracias por usar el programa." << endl; 
            break; 

        case 3:
        cout << " Has escogido OTOÑO. Gracias por usar el programa. " << endl; 
            break;

        case 4: 
        cout << " Has escogido INVIERNO. Gracias por usar el programa. " << endl; 
            break;

        default:
            cout << " Opcion invalida, por favor elige una opcion del 1-4. " << endl; 
            break;
    }

    
    
    
    
    
    
    
    
    
    
    return 0;
}