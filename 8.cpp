#include <iostream>

using namespace std;

int main(){
    int numero;
    int asa = 0;
    cout << "digite um numero:", cin >> numero;
    while(asa <= numero) {
        
        cout << asa;
        if (asa < numero){
            cout << "-";
        }
        asa += 1;
    }
    printf("\n\n");
    printf("Pressione enter para continuar...\n");
    system("read b");
    return 0;
}