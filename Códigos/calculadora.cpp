#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1;
    int num2;

    float div;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    div = num1/num2;
    
    cout << "Soma: " << num1+num2 << endl;

    cout << "Subtração: " << num1-num2 << endl;

    cout << "Multiplicação: " << num1*num2 << endl;

    //coloquei essas partes adicionais somente para printar com as casas decimais
    cout << "Divisão: " << fixed << setprecision(2) << div << endl;
}
