#pragma once

#include <string>

using namespace std;


class Cuenta {

public:
	Cuenta(string _nombreCuenta, int balanceInicial, unsigned int _numeroCuenta, string _nombre, string _apellido, double _balance) :
		nombreCuenta{ nombreCuenta }, numeroCuenta{_numeroCuenta},nombre{ _nombre}, apellido{ _apellido}, balanceDouble{ _balance} {
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

	int retiro(float montoRetiro) {
		if (balance < montoRetiro) {
			cout << "Retiro excede el balance de la cuenta" << endl;
		}
		else {
			cout << "Retiro exitoso, su balance actual es: " << balance << endl;
			balance -= montoRetiro;
		}
	}

private:
	string nombreCuenta, nombre, apellido;
	double balanceDouble;
	unsigned int numeroCuenta;
	int balance{ 0 };
};


class Factura {

	Factura(string _partNum, string _descripcion, int _cantidad, int _precioItem): 
		partNum{_partNum}, descripcion{_descripcion}, cantidad{_cantidad}, precioItem{_precioItem}{}

	//funciones set
	 void set_partNum(string newPartNum) {
		partNum = newPartNum;
	}

	 void set_descripcion(string newDescripcion) {
		descripcion = newDescripcion;
	}

	 void set_cantidad(int newCantidad) {
		if (cantidad >= 0)
			cantidad = newCantidad;
	}

	 void set_precioItem(int newPrecioItem) {
		if (newPrecioItem >= 0)
			precioItem = newPrecioItem;
	}

	 void set_tax(double newTax) {
		if (newTax >= 0)
			tax = newTax;
	}

	 void set_descuento(double newDescuento) {
		 if (newDescuento >= 0)
			descuento = newDescuento;
	}

	//funciones get
	string get_partNum() {
		return partNum;
	}

	string get_descripcion() {
		return descripcion;
	}

	int get_cantidad() {
		return cantidad;
	}

	int get_precioItem() {
		return precioItem;
	}

	double get_tax() {
		return tax;
	}

	double get_descuento() {
		return descuento;
	}

	//funcion conseguir monto factura
	double getMontoFactura() {
		return ((precioItem * cantidad) - (precioItem * cantidad * tax) - (precioItem * cantidad * descuento));
	}

private:
	string partNum, descripcion;
	int cantidad, precioItem;
	double tax{0.20}, descuento{0};
};
