#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    std::ios::sync_with_stdio(false);

    int min=0 , max=100 , num ,y=0; //Minimo e Máximo iniciais
    int x=1;

    srand(time(NULL));

    while (x){
        num=rand()%(max+min);
        cout << "Seu numero é :" << num << endl;
        cout << "0-Sim\n1-Nao (Maior)\n2-Nao (Menor)\n-> ";
        cin >> x;

        if (x==1){
            min=num;
        } else{
            max=num;
        }
        y++;
    }
    cout << "Numero de tentativas: "<< y << endl;



}