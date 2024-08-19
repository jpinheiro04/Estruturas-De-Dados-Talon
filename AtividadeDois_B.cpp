#include <iostream>
using namespace std;

void moveDisco(char origem, char destino) {
    cout << origem << " para " << destino << endl;
}

void torreHanoi(int altura, char origem, char destino, char trabalho) {
    if (altura == 1) {
        moveDisco(origem, destino);
    } else {
        torreHanoi(altura - 1, origem, trabalho, destino);
        cout << "--------|" << endl;
        moveDisco(origem, destino);
        cout << "--------|" << endl;
        torreHanoi(altura - 1, trabalho, destino, origem);
        
    }
}
int main() {
    int n;
    cout << "Digite a quantidade de discos da torre: ";
    cin >> n;
    torreHanoi(n, 'A', 'B', 'C');
    return 0;
}
