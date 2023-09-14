#include <string>

using namespace std;

class Date{

public:
    Date(int _month, int _day, int _year ): day{_day}, year{_year} {
		month = _month <= 12 ? _month : 1;
    }

    void set_month(int newMonth) {
		month = newMonth <= 12 ? newMonth : 1;
	}

    void set_day(int newDay) {
		day = newDay;
	}

    void set_year(int newYear) {
		year = newYear;
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

    string displayDate(){
		char linea = '/';
        return (to_string(month) + linea + to_string(day) + linea + to_string(year));
    }

private:
    int month{1}, day, year;

};