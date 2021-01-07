#include "fecha.h"
using namespace std;

void InputHandler(int day, int month){
  if (day > 31){
    cout << "the first parameter must be less than 31" << endl;
    exit(EXIT_SUCCESS);
  }
  if (month > 12){
    cout << "The second parameter must be less than 12" << endl;
    exit(EXIT_SUCCESS);
  }
}

int main(int argc, char* argv[]){
  Usage (argc, argv);
  int day = atoi(argv[1]);
  int month = atoi(argv[2]);
  int year = atoi(argv[3]);
  int N = atoi(argv[4]);  // Variable that we will use to know how many times to make the change of dates that we are requested in the exercise
  string name_of_the_output_file = (argv[5]);

  InputHandler(day, month);

  ofstream file(name_of_the_output_file);


  file << "Hello! In this program we have an initial day, an initial month and an initial year." << endl;
  file << "Knowing the year, we will determine if it is a leap year." << endl;
  file << "Then we will increase the date day by day " << N << " times" << endl;
  file << "--------------------------------------------------------------------------------------" << endl;
  file << "Day: " << day << endl;
  file << "Month: " << month << endl;
  file << "Year: " << year << endl;

  Date date_obj(day, month, year);

  if (date_obj.leap_year() == true){
    file << "Plus " << year << " is a leap year" << endl;
  }else if (date_obj.leap_year() == false){
    file << "Plus " << year << " is not a leap year" << endl;
  }

  if(day < 10){
        file << "0" << day << "/";
    }else {
        file << day << "/";
    }
    if(month < 10){
        file << "0" << month << "/";
    }else{
        file << month << "/";
    }
    if (year <10){
        file << "0" << year;
    }else {
        file << year;
    }
    file << endl;

    file << "Following the structure to follow when writing a date, our date is: " << day << "/" << month << "/" << year << endl;
    file << "--------------------------------------------------------------------------------------" << endl;
    file << "Finally we are going to increase the date day by day, " << N << " times and print the result on the screen" << endl;

    for (int j = 0; j < N; j++)
    {
      if (month == 4 || month == 6 || month == 9 || month == 11)
      {
        day++;
        if (day > 30)
        {
          day = 1;
          month++;
          if (month > 12)
          {
            month = 1;
            year++;
            if (day < 10)
            {
              file << "0" << day << "/";
            }
            else
            {
              file << day << "/";
            }
            if (month < 10)
            {
              file << "0" << month << "/";
            }
            else
            {
              file << month << "/";
            }
            if (year < 10)
            {
              file << "0" << year << endl;
            }
            else
            {
              file << year << endl;
            }
          }
          else
          {
            if (day < 10)
            {
              file << "0" << day << "/";
            }
            else
            {
              file << day << "/";
            }
            if (month < 10)
            {
              file << "0" << month << "/";
            }
            else
            {
              file << month << "/";
            }
            if (year < 10)
            {
              file << "0" << year << endl;
            }
            else
            {
              file << year << endl;
            }
          }
        }
        else
        {
          if (day < 10)
          {
            file << "0" << day << "/";
          }
          else
          {
            file << day << "/";
          }
          if (month < 10)
          {
            file << "0" << month << "/";
          }
          else
          {
            file << month << "/";
          }
          if (year < 10)
          {
            file << "0" << year << endl;
          }
          else
          {
            file << year << endl;
          }
        }
      }
      if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
      {
        day++;
        if (day > 31)
        {
          day = 1;
          month++;
          if (month > 12)
          {
            month = 1;
            year++;
            if (day < 10)
            {
              file << "0" << day << "/";
            }
            else
            {
              file << day << "/";
            }
            if (month < 10)
            {
              file << "0" << month << "/";
            }
            else
            {
              file << month << "/";
            }
            if (year < 10)
            {
              file << "0" << year << endl;
            }
            else
            {
              file << year << endl;
            }
          }
          else
          {
            if (day < 10)
            {
              file << "0" << day << "/";
            }
            else
            {
              file << day << "/";
            }
            if (month < 10)
            {
              file << "0" << month << "/";
            }
            else
            {
              file << month << "/";
            }
            if (year < 10)
            {
              file << "0" << year << endl;
            }
            else
            {
              file << year << endl;
            }
          }
      }else{
        if (day < 10){
          file << "0" << day << "/";
        }else{
          file << day << "/";
        }
        if (month < 10){
          file << "0" << month << "/";
        }else {
          file << month << "/";
        }
        if (year < 10){
          file << "0" << year << endl;
        }else{
          file << year << endl;
        }
      }
    }
    if (month == 2 && date_obj.leap_year() == true ){
      day++;
      if (day >29){
        day = 1;
        month++;
        if (month > 12){
          month = 1;
          year++;
          if (day < 10){
            file << "0" << day << "/";
          }else{
            file << day << "/";
          }
          if (month < 10){
            file << "0" << month << "/";
          }else {
            file << month << "/";
          }
          if (year < 10){
            file << "0" << year << endl;
          }else{
            file << year << endl;
          }
        }else {
          if (day < 10){
            file << "0" << day << "/";
          }else{
            file << day << "/";
          }
          if (month < 10){
            file << "0" << month << "/";
          }else {
            file << month << "/";
          }
          if (year < 10){
            file << "0" << year << endl;
          }else{
            file << year << endl;
          }
        }
      }else{
        if (day < 10){
          file << "0" << day << "/";
        }else{
          file << day << "/";
        }
        if (month < 10){
          file << "0" << month << "/";
        }else {
          file << month << "/";
        }
        if (year < 10){
          file << "0" << year << endl;
        }else{
          file << year << endl;
        }
      }
    }
    if (month == 2 && date_obj.leap_year() == false ){
      day++;
      if (day >28){
        day = 1;
        month++;
        if (month > 12){
          if (day < 10){
            file << "0" << day << "/";
          }else{
            file << day << "/";
          }
          if (month < 10){
            file << "0" << month << "/";
          }else {
            file << month << "/";
          }
          if (year < 10){
            file << "0" << year << endl;
          }else{
            file << year << endl;
          }
        }else{
          if (day < 10){
            file << "0" << day << "/";
          }else{
            file << day << "/";
          }
          if (month < 10){
            file << "0" << month << "/";
          }else {
            file << month << "/";
          }
          if (year < 10){
            file << "0" << year << endl;
          }else{
            file << year << endl;
          }
        }
      }else{
        if (day < 10){
          file << "0" << day << "/";
        }else{
          file << day << "/";
        }
        if (month < 10){
          file << "0" << month << "/";
        }else {
          file << month << "/";
        }
        if (year < 10){
          file << "0" << year << endl;
        }else{
          file << year << endl;
        }
      }
    }
    j++;
  }
  file.close();
  return 0;
}