#include <iostream>

using namespace std;

int main(){
    int bino, cino, soma;
    cin >> bino >> cino;
    soma = bino + cino;
    if(soma%2==0){
        cout << "Bino" << endl;
    }else{
        cout << "Cino" << endl;
    }
}
