#include <iostream>

using namespace std;

int soma(int a, int b); //prototipo
int main( void ){
    cout << soma(2, 4) << endl;
    return 0;
}
int soma(int a, int b){ //executação
    return a+b;
}


