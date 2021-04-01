#include <iostream>
#include <stdarg.h>
using namespace std;

int soma(const int contador, ... );

int main(){
    cout << soma( 2, 2, 3 ) << endl; //primeiro parametro é o numero de argumentos
    return 0;
}

int soma(const int contador, ... ){
    va_list list;
    int  total = 0;
    va_start(list, contador);
    for(int i = 0; i < contador; i++){
        total += va_arg(list, int );
    }
    va_end( list );
    return total;
}