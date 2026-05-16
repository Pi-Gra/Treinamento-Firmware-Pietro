#include <iostream>

using namespace std;

int main()
{
    int soma_total = 0;
    int num_atual = 0;

    do {
        cout << "Digite um número: ";
        cin >> num_atual;
        soma_total += num_atual;
    } while (num_atual>0);
    
    soma_total-=num_atual;

    cout << "A soma dos números positivos é: " << soma_total << endl;
    cout << "Fim do Programa!" << endl;
}
