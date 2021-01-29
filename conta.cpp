
#include <iostream>
#include <string>
#include "conta.h"

// CONSTRUTOR
    Conta::Conta(int Agencia, int numConta, double Saldo, std::string Banco, std::string Titular){
        this->Agencia = Agencia;
        this->Saldo = Saldo;
        this->numConta = numConta;
        this->Banco = Banco;
        this->Titular = Titular;
    }

// GETTERS
int Conta::getAgencia(){
    return Agencia;
}
int Conta::getnumConta(){
    return numConta;
}
double Conta::getSaldo(){
    return Saldo;
}
std::string Conta::getBanco(){
    return Banco;
}
std::string Conta::getTitular(){
    return Titular;
}

// SETTERS
int Conta::setAgencia(int Agencia){
    return this->Agencia = Agencia;
}
int Conta::setnumConta(int numConta){
    return this->numConta = numConta;
}
double Conta::setSaldo(double Saldo){
    return this->Saldo = Saldo;
}
std::string Conta::setBanco(std::string Banco){
    return this->Banco = Banco;
}
std::string Conta::setTitular(std::string Titular){
    return this->Titular = Titular;
}

// METODOS
bool Conta::Sacar(double Valor){

    if(Valor>Saldo){
        std::cout<<"\n ERRO: IMPOSSIVEL REALIZAR ACAO\n SALDO INSUFICIENTE"<<std::endl;
        return false;
    }
    else{
        Saldo-=Valor;
        std::cout<<"\n ACAO CONCLUIDA COM SUCESSO \n SALDO ATUAL: $"<<Saldo<<std::endl;
        return true;
    }
}

void Conta::Depositar(double Valor){
    Saldo+=Valor;
    std::cout<<"\n ACAO CONCLUISA COM SUCESSO \n SALDO ATUAL: $"<<Saldo<<std::endl;
}

void Conta::Transferir(Conta &Destino, double Valor){
    if(Valor>Saldo){
        std::cout<<"\n ERRO: IMPOSSIVEL REALIZAR ACAO\n SALDO INSUFICIENTE PARA CONCLUIR TRANSFERENCIA"<<std::endl;
       
    }
    else{
        Destino.Depositar(Valor);
        Saldo-=Valor;
        std::cout<<"\n********* TRANSFERENCIA *********"<<std::endl;
        std::cout<<" CONTA CORRENTE: "<<numConta<<std::endl;
        std::cout<<" TITULAR:"<<Titular<<std::endl;
        std::cout<<" ---------------------------------"<<std::endl;
        std::cout<<" CONTA DESTINO: "<<Destino.numConta<<std::endl;
        std::cout<<" TITULAR: "<<Destino.Titular<<std::endl;
        std::cout<<" ---------------------------------"<<std::endl;
        std::cout<<" VALOR TRANSFERIDO: "<<Valor<<std::endl;
        std::cout<<" SEU SALDO ATUAL: "<<Saldo<<std::endl;
        std::cout<<"\n ACAO CONCLUIDA COM SUCESSO "<<std::endl;
        

    }

}
