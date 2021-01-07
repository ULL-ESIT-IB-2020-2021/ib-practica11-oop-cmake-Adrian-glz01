#include "modificacion.h"

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

    double Racional::media_num(const Racional &rac_obj){
        double num_media = (num_ + rac_obj.num_ ) /2;
        std::cout << "La media de los numeradores  es = " << num_media << std::endl;         
    }

    double Racional::media_denom(const Racional &rac_obj){
    double denom_media = (denom_ + rac_obj.denom_) /2;
    std::cout << "La media de los denominadores  es = " << denom_media << std::endl;         
    }

double Racional::media_file(){
    std::ifstream intput_file("modificacion.txt");
    std::string line;
    double media{0};
    int lines{0};
    while(getline(intput_file, line)){
        std::string rac1_file = line.substr(0, 3);
        std::string rac2_file = line.substr(4, 10);
        double rac1_num = std::atoi(&rac1_file[0]);
        double rac1_denom = std::atoi(&rac1_file[2]);
        double rac2_num = std::atoi(&rac2_file[0]);
        double rac2_denom = std::atoi(&rac2_file[2]);
        std::cout << media << " += " << rac1_num << "/" << rac1_denom << " + " << rac2_num << "/" << rac2_denom << std::endl;

        media += (rac1_num / rac1_denom) + (rac2_num / rac2_denom);
        std::cout << "Media: " << media << std::endl;
        lines++;
    }
    return media / lines;
}