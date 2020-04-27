#include <iostream>
#include <fstream>


void menu (std::string& commande, std::string& nom_fichier)
{
    SetConsoleTextAttribute(hConsole, 9);
    std::cout<<std::endl<<"Options :"<<std::endl;
    SetConsoleTextAttribute(hConsole, 15);
    std::cout<<std::endl<<"exit"<<std::endl<<"charger (fichier)"<<std::endl<<std::endl<<">";
    SetConsoleTextAttribute(hConsole, 10);
    std::getline(std::cin, commande);
    SetConsoleTextAttribute(hConsole, 15);
    fflush(stdin);
}



int main()
{
    std::string commande;
    std::string nom_fichier;
    return 0;
}
