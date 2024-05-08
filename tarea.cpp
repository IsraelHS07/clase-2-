#include <iostream>
using namespace std; 

int main()
{
    char opcion, variable ='x';

    do
    {
        cout << "Menu" << "\n";
        cout << "opciones de almuerzo"<<"\n";
     cout << "A pollo campero" <<"\n";
     cout << "B pupusas"<< "\n";
     cout << "C panes con pollo" << "\n";
     cout << "D sopa de pollo" << "\n";
     cout << "selcciona una opcion:"<<"\n";
     cin>> opcion;
     cout<< "opcion sleccionada" << opcion << "\n";
    }
    while (opcion != variable);

    return 0;
    
}