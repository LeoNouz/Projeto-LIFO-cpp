#include <iostream>
#include <cstdlib>
#include <string>
#include "include/lifo.h"
using namespace std;

int setTamanhoPilha()
{
    system("cls");
    int tamanho;
    cout << "* Tamanho da Pilha *";
    cout << "\n===============================" << endl;
    cout << "Tamanho: ";
    cin >> tamanho;
    return tamanho;
}

int main(int argc, char * argv[])
{
    int tamanhoPilha = setTamanhoPilha();

    LifoHolder registro(tamanhoPilha);
    registro.controlarPilha();
    return 0;
}
