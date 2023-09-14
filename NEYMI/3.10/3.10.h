#include <string>

using namespace std;

class In {
public:
	In(string dpartN, string ddes, int cantd, int dprecio): 
		partN{dpartN}, des{ddes}, cant{cantd}, precioxItem{dprecio}{}

	 void set_partNum(string partN) {
		partN = partN;
	}

	 void set_descripcion(string descN) {
		des = descN;
	}

	 void set_cantidad(int cantN) {
		if (cant >= 0)
			cant = cantN;
	}

	 void set_precioItem(int precioN) {
		if (precioN >= 0)
			precioxItem = precioN;
	}

	 void set_impuesto(double impuestos) {
		if (impuestos >= 0)
			impuestoOficial = impuestos;
	}

	 void set_descuento(double descuentoN) {
		 if (descuentoN >= 0)
			descuento = descuentoN;
	}

	string get_partNum() {
		return partN;
	}

	string get_descripcion() {
		return des;
	}

	int get_cantidad() {
		return cant;
	}

	int get_precioItem() {
		return precioxItem;
	}

	double get_tax() {
		return impuestoOficial;
	}

	double get_descuento() {
		return descuento;
	}

	double montoBoleta() {
		return ((precioxItem * cant) - (precioxItem * cant * impuestoOficial) - (precioxItem * cant * descuento));
	}

private:
	string partN, des;
	int cant, precioxItem;
	double impuestoOficial{0.2}, descuento{0};
};
