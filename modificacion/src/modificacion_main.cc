#include "modificacion.h"


int main(int argc, char* argv[]){
    Usage(argc, argv);
    std::string file_name = argv[1];
    std::string line;
    std::ifstream input_file_stream("modificacion.txt");
    std::ofstream output_file_stream(file_name);
    while(std::getline(input_file_stream, line)){
        std::cout << line << std::endl;
        std::string rac1_file = line.substr(0, 3);
        std::string rac2_file = line.substr(4, 3);
        Racional rac1, rac2;
        rac1_file >> rac1;
        rac2_file >> rac2;


        output_file_stream << rac1.suma(rac2);
        output_file_stream << "\n";
        output_file_stream << rac1.resta(rac2);
        output_file_stream << "\n";
        output_file_stream << rac1.multiplicacion(rac2);
        output_file_stream << "\n";
        output_file_stream << rac1.dividision(rac2);
        output_file_stream << "\n";


    }
    Racional rac22(5,2), rac55(3,4);
    rac22.media_num(rac55);
    rac22.media_denom(rac55);

    double file_media = rac22.media_file();
    std::cout<< "La media de las 4 fracciones halladas en el fichero modificacion.txt es: " << file_media << std::endl;

}