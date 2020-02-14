#include <iostream>
#include <string>

using namespace std;

int main() {

  std::ios::sync_with_stdio(false);

  string nome, sobrenome, nomeCompleto;

  cout << "Nome: ";
  //cin >> nome;
  getline(cin,nome);

  cout << "Sobrenome: ";
//  cin >> sobrenome;
  getline(cin, sobrenome);

  nomeCompleto = nome + " " + sobrenome;

  cout << "Nome completo: " << nomeCompleto <<"\nTamanho:"<< nomeCompleto.size()  << endl;
}