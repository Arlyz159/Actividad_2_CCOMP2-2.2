#include <string>
using namespace std;

class Date{

public:
    Date(int month, int day, int year ): day{day}, year{year} {
		if(month <= 12) 
			month = month;
		else:
			month = 1
    }

    void set_month(int monthN) {
		month = monthN <= 12 ? monthN : 1;
	}

    void set_day(int diaN) {
		day = diaN;
	}

    void set_year(int añoN) {
		year = añoN;
	}

    int get_year() const{
		return year;
	}

    int get_day() const{
		return day;
	}

    int get_month() const{
		return month;
	}


private:
    int month{1}, day, year;

};