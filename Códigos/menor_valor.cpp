#include <iostream>

using namespace std;

int compararMenor(int num1, int num2) {
    if(num1<=num2) {
        return num1;
    } else {
        return num2;
    }
}

int main()
{
    int menor_atual = 0;
    int num_atual = 0;

    cout << "Digite 6 números: ";
    cin >> menor_atual;
    for(int i = 0; i<5; i++) {
        cin >> num_atual;
        menor_atual = compararMenor(num_atual, menor_atual);
    }

    cout << "O menor número digitado foi: " << menor_atual << endl;
}
