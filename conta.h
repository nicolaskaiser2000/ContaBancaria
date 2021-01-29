
#include <iostream>
#include <string>

class Conta{

    private:
        int Agencia, numConta;
        double Saldo;
        std::string Banco, Titular;

    public:

        Conta(int Agencia, int numConta, double Saldo, std::string Banco, std::string Titular);

        int getAgencia();
        int getnumConta();
        double getSaldo();
        std::string getBanco();
        std::string getTitular();

        int setAgencia(int Agencia);
        int setnumConta(int numConta);
        double setSaldo(double Saldo);
        std::string setBanco(std::string Banco);
        std::string setTitular(std::string Titular);

        bool Sacar(double Valor);
        void Depositar(double Valor);
        void Transferir(Conta &Destino, double Valor);
        double ConsultarSalto(double Saldo);
};