#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    string nome;
    double valorPorHora;
    int horasTrabalhadas;

    // Entrada de dados
    cout << "Nome do funcionario: ";
    getline(cin, nome);  

    cout << "Valor por hora: ";
    cin >> valorPorHora;

    cout << "Horas trabalhadas: ";
    cin >> horasTrabalhadas;

    double pagamento = valorPorHora * horasTrabalhadas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser R$ " << pagamento << endl;

    return 0;
}
