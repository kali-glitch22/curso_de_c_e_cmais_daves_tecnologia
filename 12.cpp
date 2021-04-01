//so funciona em c++

#include <iostream>

using namespace std;

template <class TIP>
TIP funcao(TIP a);

int main(){
    cout << funcao( 30 );
    return 0;
}

template <class TIP>
TIP funcao(TIP a){
    if (typeid(a).name() == typeid( int ).name()){
        cout << "inteiro" << endl;
    }
    if (typeid(a).name() == typeid( double ).name()){
        cout << "Inteiro" << endl;
    }
    return ++a;
}
