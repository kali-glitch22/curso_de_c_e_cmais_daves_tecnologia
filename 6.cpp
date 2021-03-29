#include <iostream>
#include <string>
//desligue o capslock
using namespace std;

int main(){
    
    int numero;
    cout << "começar a contagem regressiva de: ", cin >> numero;
    switch( numero ){
        case 0 : cout << "zero/n";
        case 1 : cout << "one\n";
        case 2 : cout << "two\n";
        case 3 : cout << "trhee\n";
        case 4 : cout << "four\n";
        case 5 : cout << "five\n";
        case 6 : cout << "six\n";
        case 7 : cout << "seven\n";
        case 8 : cout << "eight\n";
        case 9 : cout << "ten\n";
        break;
        default:
            cout << "do you know da wae\n";
        break;  
    } 

    

    printf("Pressione enter para continuar...\n");
    system("read b");
    return 0;
}