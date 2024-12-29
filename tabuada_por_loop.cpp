#include <iostream>
using namespace std;

void imprimer_tabuada(int tab, int limite) {
    cout << "Tabuada do " << tab <<" até o " << limite << ": "<< endl;
    for (int i = 0; i<=limite; i++){
        cout << tab << " x " << i << " = " << tab*i << endl; 
    }
}

int main(){
    int tab, limite;
    cout << "Digite o número para multiplicar: ";
    cin >> tab;
    cout << "Digite o limite da tabuada: ";
    cin >> limite;
    imprimer_tabuada(tab, limite);
    return 0;
}