#pragma once
#include <string>

using namespace std;

class Factura {
public:
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
