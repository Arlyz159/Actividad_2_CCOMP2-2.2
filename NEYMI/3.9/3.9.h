#include <iostream>
#include <string>

using namespace std;

class Cuenta {
public:

	Cuenta(string nCuenta, int balanceInicial) :
		name{ nCuenta } {
		if (balanceInicial > 0) 
			balance = balanceInicial;
	}

	void depositar(int mDeposito) {
		if (mDeposito > 0) 
			balance += mDeposito;
		
	}

	int getBalance() const {
		return balance;
	}

	void ponername(string nCuenta) {
		name = nCuenta;
	}

	string getName() const {
		return name;

	}

	void Retirar(float montoRetiro) {
		if (balance < montoRetiro) {
			cout << "Retiro excede el balance de la cuenta" << endl;
		}
		else {
			cout << "Retiro exitoso, su balance actual es: " << balance << endl;
			balance -= montoRetiro;
		}
	}

private:
	string name;
	int balance{ 0 };
};
