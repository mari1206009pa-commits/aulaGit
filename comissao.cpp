#include<iostream>

using namespace std;

int main() {
  string nome;
  double valorVenda;
  double taxaComissao=0.05;
  double comissao;
  
 cout<< "digite seu nome"<<endl;
 cin>>nome;
 
 cout<< "digite o valor da venda: " <<endl;
 cin>>valorVenda;
 
 comissao = valorVenda * taxaComissao;
 
 cout<<"vendedor: "<<nome <<endl;
 cout<< "comissao: R$ " <<comissao<<endl;
 
  return 0; 
}
