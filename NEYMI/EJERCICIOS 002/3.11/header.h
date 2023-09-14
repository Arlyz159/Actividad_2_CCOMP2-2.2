#include <string>
#include <iostream>

using namespace std;

class motorVehicle{
public:
    motorVehicle(string _make, string _fuelType, int _year, string _color, int _engineCapacity): 
        make{_make}, fuelType{_fuelType}, year{_year}, color{_color}, engineCapacity{engineCapacity}{}

    void set_make(string newMake) {
		make = newMake;
	}

        void set_fuelType(string newFuelType) {
		fuelType = newFuelType;
	}

        void set_year(int newYear) {
		year = newYear;
	}

        void set_color(string newColor) {
		color = newColor;
	}

        void set_engineCapacity(int newEngineCapacity) {
		engineCapacity = newEngineCapacity;
	}

        string get_make() const{
		return make;
	}

        string get_fuelType( ) const{
		return fuelType;
	}

        int get_year( ) const {
		return year;
	}

        string get_color( ) const {
		return color;
	}

        int get_engineCapacity ( ) const {
		return engineCapacity;
	}


    void displayCarDetails (){
        cout << "Make: "<< make << endl << "Fuel Type: " << fuelType << endl << "Color: " << color << endl << "Year: " << year << endl << "Engine Capacity: " << engineCapacity << endl;
    }

private:
    string make, fuelType, color;
    int year, engineCapacity;
};