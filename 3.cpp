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