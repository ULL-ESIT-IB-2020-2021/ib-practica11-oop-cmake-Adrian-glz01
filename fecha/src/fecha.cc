#include "fecha.h"

void Usage(int argc, char *argv[]) {
  if (argc != 6) {
    cout << argv[0] << ": A natural number is missing as a parameter" << endl;
    cout << "Try to use " << argv[0] << " --date_management to see how to write correctly the command line and parameters" << endl;
    exit(EXIT_SUCCESS);
  }
  string parameter{argv[1]}; //
  if (parameter == "--date_management") {
    cout << "./fechas dd/mm/yy N output_file.txt" << endl;
    exit(EXIT_SUCCESS);
  }
}

Date::Date(int _day,int _month ,int _year){
  day = _day;
  month = _month;
  year = _year;
}

void Date::_date(){
  std::cout << day << "/" << month << "/" << year << std::endl;
}

bool Date::leap_year(){
  if (year % 4 == 0){
    return true;
  }else {
    return false;
  }
}
void Date::setDay(int day_){
  day = day_;
}
void Date::setMonth(int month_){
  month = month_;
}
void Date::setYear(int year_){
  year = year_;
}