#include <iostream>
#include <iomanip>

using namespace std;

float aplicarDesconto(float valor) {
    if (valor>100) {
        return (0.9*valor);
    } else {
        return valor;
    }
}

int main()
{
    int num_vendas = 0;
    float fatura = 0.00;
    float valor_atual = 1.00;
    
    while (valor_atual!=0) {
        num_vendas += 1;
        cout << "Digite o valor da venda (0 para sair): ";
        cin >> valor_atual;
        valor_atual = aplicarDesconto(valor_atual);
        fatura += valor_atual;
    }
    
    num_vendas -= 1;
    

    cout << "Total de vendas processadas: " << num_vendas << endl;
    cout << "Total faturado (com descontos): " << fixed << setprecision(2) << fatura << endl;
}
