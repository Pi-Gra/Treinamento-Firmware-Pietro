#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num1 = 0;
    float num2 = 0;
    float num3 = 0;
    float media = 0;

    cout << "Digite a primeira nota: ";
    cin >> num1;
    cout << "Digite a segunda nota: ";
    cin >> num2;
    cout << "Digite a terceira nota: ";
    cin >> num3;

    media = (num1+num2+num3)/3;

    cout << "Média: " << fixed << setprecision(2) << media << endl;
    if (media>=5) {
        cout << "Aluno aprovado!" << endl;
    } else {
        cout << "Aluno reprovado!" << endl;
    }   
}
