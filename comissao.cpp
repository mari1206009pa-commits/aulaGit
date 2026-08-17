#include<iostream>

using namespace std;

double calculaComissao(double vlVenda, double txComissao)
{
	return vlVenda * txComissao;
}

void mostraResultado(string nome, double comissao){
	cout<<"vendedor: "<<nome <<endl;
 cout<< "comissao: R$ " <<comissao<<endl;
}
int main() {
  string nome;
  double valorVenda;
  double taxaComissao=0.05;
  double comissao;
  
 cout<< "digite seu nome"<<endl;
 cin>>nome;
 
 cout<< "digite o valor da venda: " <<endl;
 cin>>valorVenda;
 
 comissao =calculaComissao (valorVenda, taxaComissao);
 
 mostraResultado(nome, comissao);
  
  return 0; 
}
