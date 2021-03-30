#include <iostream>

using namespace std;

int main(){
    int lista[ 10 ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char matriz[ 13 ] = {"curso de c"};
    // chair lista[ 11] = "curso de c"; ou pode ser separado
    cout << sizeof(matriz); //em caso de uso em loop use um -1 pois tem uma string escondida
    
    printf("\n\n");
    printf("Pressione enter para continuar...\n");
    system("read b");
    
    return 0;
}