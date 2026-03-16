#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    cout<<"Edwin Oswaldo Cortez Tista"<<endl;

    Nodo* head   = NULL;
    Nodo* actual = NULL;

    int valor;
    char opcion = 's';

    while (opcion == 's') {

        cout << "Ingrese un numero: ";
        cin  >> valor;

        Nodo* nuevo = new Nodo();
        nuevo->dato      = valor;
        nuevo->siguiente = NULL;

        if (head == NULL) {
            head   = nuevo;
            actual = nuevo;
        } else {
            actual->siguiente = nuevo;
            actual = nuevo;
        }

        cout << "Desea ingresar otro numero? (s/n): ";
        cin  >> opcion;
    }

    cout << "Lista generada:";

    Nodo* temp = head;
    while (temp != NULL) {
        cout << temp->dato;
        if (temp->siguiente != NULL)
            cout << " -> ";
        temp = temp->siguiente;
    }
    cout << " -> NULL" << endl;

    int cantidad = 0;
    int suma     = 0;

    temp = head;
    while (temp != NULL) {
        cantidad++;
        suma += temp->dato;
        temp = temp->siguiente;
    }

    cout << "Cantidad de nodos: " << cantidad << endl;
    cout << "Suma de valores:   " << suma     << endl;
    cout << "Promedio:          " << (double)suma / cantidad << endl;

    return 0;
}