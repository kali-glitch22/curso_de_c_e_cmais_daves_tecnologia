#include <iostream>

using namespace std;

int main(){
    int numero;
    int j; 
    for ( numero=0; numero<=100000; numero++){
        cout << "do you know da wae";
        
        for (j= 0; j<1;j++){
            cout << "?" << endl;
            system("mpg123 -q /root/Downloads/do.mp3"); //local do arquivo
        //no  windows system(start \local\do.mp3)
        }
    }
    printf("Pressione enter para continuar...\n");
    system("read b");

    return 0;
}
