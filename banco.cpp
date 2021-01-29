#include <iostream>
#include <string>
#include "conta.h"

int main(){

    Conta Conta1(002,23418,1350.04,"BRADESCO","JOAO SILVA");
    Conta Conta2(004,54216,69855.56,"ITAU","JAILSON BARROS");

    Conta2.Transferir(Conta1,500);

    system("pause");
    return 0;
}