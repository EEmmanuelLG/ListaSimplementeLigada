
#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Lista* lista = new Lista();
    int opc = 0;

    while (opc != 10)
    {
        system("cls");
        cout << "1. Insertar al inicio" << endl;
        cout << "2. Insertar al final" << endl;
        cout << "3. Insertar en posicion" << endl;
        cout << "4. Mostrar" << endl;
        cout << "5. Obtener dato" << endl;
        cout << "6. Eliminar" << endl;
        cout << "7. Eliminar todo" << endl;
        cout << "8. Ordenar" << endl;
        cout << "9. Tamano" << endl;
        cout << "10. Salir" << endl;

        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opc;

        system("cls");

        switch (opc)
        {
        case 1:
        {
            int dato;
            cout << "Ingrese el dato: ";
            cin >> dato;

            lista->InsertaAlInicio(dato);

            break;
        }
        case 2:
        {
            int dato;
            cout << "Ingrese el dato: ";
            cin >> dato;

            lista->InsertaAlFinal(dato);

            break;
        }
        case 3:
        {
            int dato, pos;
            cout << "Ingrese el dato: ";
            cin >> dato;
            cout << "Ingrese la posicion: ";
            cin >> pos;

            lista->InsertaEnPosicion(dato, pos);

            break;
        }
        case 4:
        {
            if (lista->EstaVacia())
            {
                cout << "La lista esta vacia" << endl;
            }
            else
            {
                lista->Mostrar();
            }
            break;
        }
        case 5:
        {
            if (lista->EstaVacia())
            {
                cout << "La lista esta vacia" << endl;
            }
            else
            {
                int pos;
                cout << "Ingrese la posicion: ";
                cin >> pos;

                int dato = lista->ObtenerDato(pos);

                cout << "El dato en la posicion " << pos << " es " << dato;
            }

            break;
        }
        case 6:
        {
            if (lista->EstaVacia())
            {
                cout << "La lista esta vacia" << endl;
            }
            else
            {
                int pos;
                cout << "Ingrese la posicion: ";
                cin >> pos;

                int dato = lista->Eliminar(pos);

                cout << "El dato eliminado en la posicion " << pos << " es " << dato;
            }

            break;
        }
        case 7:
        {
            if (lista->EstaVacia())
            {
                cout << "La lista esta vacia" << endl;
            }
            else
            {
                int eliminados = lista->EliminarTodo();

                cout << "Se eliminaron " << eliminados << " elementos";
            }

            break;
        }
        case 8:
        {
            if (lista->EstaVacia())
            {
                cout << "La lista esta vacia" << endl;
            }
            else
            {
                lista->Ordenar();
                cout << "Lista ordenada: " << endl;
                lista->Mostrar();
            }

            break;
        }
        case 9:
        {
            cout << "La lista contiene " << lista->ObtenerTamano() << " elementos" << endl;
            break;
        }
        }

        cin.get();
        cin.get();
    }
}
