#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float tempc;
    float tempf;

    cout << "Digite a temperatura em Celsius: ";
    cin >> tempc;

    tempf = ((9*tempc)/5)+32;

    cout << "Divisão: " << fixed << setprecision(2) << tempf << endl;
}
