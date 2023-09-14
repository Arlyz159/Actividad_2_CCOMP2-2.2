#pragma once
#include <iostream>
#include <string>

using namespace std;


class Cuenta {
public:

	Cuenta(string nombreCuenta, int balanceInicial) :
		nombre{ nombreCuenta } {
		if (balanceInicial > 0) {
			balance = balanceInicial;
		}
	}

	void depositar(int montoDeposito) {
		if (montoDeposito > 0) {
			balance += montoDeposito;
		}
	}

	int getBalance() const {
		return balance;
	}

	void ponerNombre(string nombreCuenta) {
		nombre = nombreCuenta;
	}

	string getName() const {
		return nombre;

	}

	void retiro(float montoRetiro) {
		if (balance < montoRetiro) {
			cout << "Retiro excede el balance de la cuenta" << endl;
		}
		else {
			cout << "Retiro exitoso, su balance actual es: " << balance << endl;
			balance -= montoRetiro;
		}
	}

private:
	string nombre;
	int balance{ 0 };
};
