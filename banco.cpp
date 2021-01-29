#include <iostream>
#include <string>
#include "conta.h"

int main(){

    Conta Conta1;
    Conta Conta2;

    Conta1.setBanco("BRADESCO");
    Conta1.setAgencia(002);
    Conta1.setnumConta(23481);
    Conta1.setSaldo(1350.04);
    Conta1.setTitular("JOAO SILVA");

    Conta2.setBanco("ITAU");
    Conta2.setAgencia(004);
    Conta2.setnumConta(54216);
    Conta2.setSaldo(69855.56);
    Conta2.setTitular("JANILSON BARROS");

    Conta2.Transferir(Conta1,500);

    system("pause");
    return 0;
}