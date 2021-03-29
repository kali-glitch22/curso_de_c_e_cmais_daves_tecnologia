/*
em c da pra usar char (asterisco)variavel para não ter que escolher o tamanho
*/

//c++
#include <iostream>
using namespace std;
int main(){
    int valor;
    cout << "qual valor?";
    cin >> valor;
    cout << "voce deve " << valor << "R$ no banco" << endl;
    return 0;   
}





/*
//c
#include <stdio.h>
#include <stdint.h>

using namespace std;

int main( void ){
    char nome[30];

    printf("qual seu nome? ");
    scanf("%s", nome);
    
    printf("Voce é muito perguiçoso %s\n", nome);
    
    return 0;
}
*/