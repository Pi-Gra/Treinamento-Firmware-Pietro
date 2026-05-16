#include <iostream>

using namespace std;

int somarSePositivo(int num, int soma_atual){
    if(num>0){
        return soma_atual + num;
    } else {
        return soma_atual;
    }
}

int main()
{
    int soma_total = 0;
    int num_atual = 0;

    cout << "Digite 5 números: ";
    for(int i = 0; i<5; i++) {
        cin >> num_atual;
        soma_total = somarSePositivo(num_atual, soma_total);
    }

    cout << "A soma dos números positivos é: " << soma_total << endl;
}
