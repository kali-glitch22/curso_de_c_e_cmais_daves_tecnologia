/* c
#include <iostream>
#include <cstdio> //esqueci de falar que essa biblioteca é a stdio do c++ mais é opcional usar ela
//os simbolos matematicos são os mesmos do python
using namespace std;

int main(){
    int numero = 6;
    if( numero == 5 ){
        printf("UAU o numero era mesmo igual a %i\n", numero);
    }else{
        printf(";-; os numeros não eram iguais\n");
    }
    printf("Pressione enter para continuar...\n");
    system("read b");
    return 0;
}
*/
#include <stdio.h>

int main( void ){
    int numero = 6;
    if( numero == 5 ){
        printf("UAU o numero era mesmo igual a %i\n", numero);
    }else{
        printf(";-; os numeros não eram iguais\n");
    }
    printf("Pressione enter para continuar...\n");
    getchar();
    return 0;
}