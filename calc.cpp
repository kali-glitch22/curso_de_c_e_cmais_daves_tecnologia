#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    
    int a, b, c;
    cout << "Digite o primeiro numero: ", cin >> a, cout << "Digite o segundo numero: ", cin >> b;
    c = (a + b);
    cout << "O resultado de ";
    printf("%i", a);
    printf(" + %i", b);
    printf(" = %i", c);
    printf("\n\n");
    printf("Pressione enter para continuar...\n");
    system("read b");
    return 0;
}