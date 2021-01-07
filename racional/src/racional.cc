#include "racional.h"

void operator>>(std::string &file_input, Racional &obj){
    int num = std::stoi(&file_input[0]);
    int denom = std::stoi(&file_input[2]);

    if(denom == 0)
        throw "El denominador no puede ser 0";

    obj.num_ = num;
    obj.denom_ = denom;
}

void Racional::print(){
    std::cout << num_ << "/" << denom_ << std::endl;
}
Racional::Racional(int num, int denom){
    num_ = num;
    denom_ = denom;
}
std::string Racional::suma(const Racional &rac_obj){
    int num_output = denom_ * rac_obj.num_ + rac_obj.denom_ * num_;
    int denom_output = denom_ * rac_obj.denom_;
    std::string rac1 = std::to_string(num_) + "/" + std::to_string(denom_);
    std::string rac2 = std::to_string(rac_obj.num_) + "/" + std::to_string(rac_obj.denom_);
    std::string str = rac1 + " + " + rac2 + " = " + std::to_string(num_output) + "/" + std::to_string(denom_output);
    return str;
}
std::string Racional::resta(const Racional &rac_obj){
    int num_output = denom_ * rac_obj.num_ - rac_obj.denom_ * num_;
    int denom_output = denom_ * rac_obj.denom_;
    std::string rac1 = std::to_string(num_) + "/" + std::to_string(denom_);
    std::string rac2 = std::to_string(rac_obj.num_) + "/" + std::to_string(rac_obj.denom_);
    std::string str = rac1 + " - " + rac2 + " = " + std::to_string(num_output) + "/" + std::to_string(denom_output);
    return str;
}
std::string Racional::multiplicacion(const Racional &rac_obj){
    int num_output = num_ * rac_obj.num_;
    int denom_output = denom_ * rac_obj.denom_;
    std::string rac1 = std::to_string(num_) + "/" + std::to_string(denom_);
    std::string rac2 = std::to_string(rac_obj.num_) + "/" + std::to_string(rac_obj.denom_);
    std::string str = rac1 + " * " + rac2 + " = " + std::to_string(num_output) + "/" + std::to_string(denom_output);
    return str;
}
std::string Racional::dividision(const Racional &rac_obj){
    int num_output = num_ * rac_obj.denom_;
    int denom_output = denom_ * rac_obj.num_;
    std::string rac1 = std::to_string(num_) + "/" + std::to_string(denom_);
    std::string rac2 = std::to_string(rac_obj.num_) + "/" + std::to_string(rac_obj.denom_);
    std::string str = rac1 + " / " + rac2 + " = " + std::to_string(num_output) + "/" + std::to_string(denom_output);
    return str;
}

bool Racional::esIgual(const Racional &rac_obj){
    
    if (denom_ == rac_obj.denom_ && num_ == rac_obj.num_){
        std::cout << "Son iguales" << std::endl;
        return 1;
    }
    else{
        std::cout << "No son iguales" << std::endl;
        return 0;
    }
}

void Usage(int argc, char *argv[]){
    if(argc == 2 && strcmp(argv[1], "--NumerosRacionales") == 0){
        std::cout << "Modo de uso: ./racionales fichero_entrada fichero_salida\n"
                    "fichero_entrada: Fichero de texto conteniendo líneas con un par de números racionales: `a/b c/d` separados por un espacio\n"
                    "fichero_salida:  Fichero de texto que contendrá líneas con las operaciones realizadas: `a/b + c/d = n/m`\n" << std::endl;
        exit(EXIT_SUCCESS);
    }
    if(argc == 2 && strcmp(argv[1], "--help") == 0){
        std::cout << "Modo de uso: ./racionales fichero_entrada fichero_salida/n"
                     "Pruebe ./racionales --help para más información" << std::endl;
        exit(EXIT_SUCCESS);
    }
    if(argc != 2){
        std::cout << "Error en el numero de argumentos, pruebe --help para mayor informacion\n";
        exit(EXIT_SUCCESS);
    }
}