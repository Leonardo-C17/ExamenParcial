#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
    //caso base: queda 1 o ningún elemento por analizar
    if (n <= 1 ) return true;

    //caso recursivo: compara el elemento actual con el anterior
    if (arr[n - 2] > arr[n - 1]) return false;

    return isSorted(arr, n - 1); //llamada recurisva, reduce el tamaño en 1 por lo que se aproxima al caso base
}

int main() {
    int arr1[] = {1, 2, 3, 5, 8};
    int arr2[] = {1, 2, 2, 5, 8};
    int arr3[] = {1, 4, 2, 8};

    //se devuelve true o false
    bool r1 = isSorted(arr1, 5);
    bool r2 = isSorted(arr2, 5);
    bool r3 = isSorted(arr3, 4);

    cout << "¿El array 1 está ordenado? " << boolalpha << r1 << '\n';
    cout << "¿El array 2 está ordenado? " << boolalpha << r2 << '\n';
    cout << "¿El array 3 está ordenado? " << boolalpha << r3 << '\n';

    
}