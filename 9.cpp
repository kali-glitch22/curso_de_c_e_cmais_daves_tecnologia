#include <iostream>

using namespace std;

int main(){
    int foda = 0;
    do { //executa pelo menos uma vez
        foda++;
    } while(foda < 100);
    printf("\n\n");
    printf("Pressione enter para continuar...\n");
    system("read b");
    return 0;
}