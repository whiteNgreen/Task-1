
#include <iostream>
#include <string>

int age;
std::string name = "";

int main()
{
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "What is your full name? ";
    std::cin.ignore();//S�rger for at den venter p� neste linje, istedenfor � bare hoppe videre 
    std::getline(std::cin, name);
    
    /*if (age <= 19) {
        std::cout << "You are a teenager";
    }
    else {
        std::cout << "You are an adult " << age << '\n';
    }*/

    std::cout << "Your name is " << name << " and you are " << age << " years old" <<'\n';
    system("pause");
    return 0;
}


