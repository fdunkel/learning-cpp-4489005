// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cout << "Hi, please type in your name: ";
    std::cin >> str;
    std::cout << "Hi, " << str << "." << std::endl << "How are you today?";


    std::cout << std::endl << std::endl;
    return (0);
}
