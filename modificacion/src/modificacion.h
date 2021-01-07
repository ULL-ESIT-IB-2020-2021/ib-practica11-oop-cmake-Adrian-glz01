#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>


void Usage(int argc, char *argv[]);

class Racional{
private:
    int num_;
    int denom_;
public:
    Racional(int num = 0, int denom = 0);
    std::string suma(const Racional &rac_obj);
    std::string resta(const Racional &rac_obj);
    std::string multiplicacion(const Racional &rac_obj);
    std::string dividision(const Racional &rac_obj);
    void print();
    bool esIgual(const Racional &rac_obj);
    friend void operator>>(std::string &file_input, Racional &obj);
    double media_num(const Racional &rac_obj);
    double media_denom(const Racional &rac_obj);
    double media_file();

};