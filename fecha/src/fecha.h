#ifndef _DATE_
#define _DATE_

#include <iostream>
#include <fstream>
#include <cstring>
#include <stdlib.h>
#include <vector>
using namespace std;

void Usage(int argc, char *argv[]);

class Date{
  private:
    int day,month,year;
  public: //method
      Date(int _day, int _month, int _year); //constructor
      void _date();
      bool leap_year();
      void setDay(int day_);
      void setMonth(int month_);
      void setYear(int year_);
};

#endif