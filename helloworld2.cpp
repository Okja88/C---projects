#include <iostream>

int main(){
    //Declare and assign variable

    int x; //declaration
    x = 5; //asssignment
    int y = 6;
    int sum = x + y;

    //Can also declare and assignment in one step at the beginning
    //Using int x = 5;

    //double(number including decimal)
    double price = 10.99;
    double temperature = 33.2;
    double gpa = 3.4;

    //single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    //boolean(true or false)
    bool student = true;
    bool power = true;
    bool forSale = false;

    //string(object that represents a sequcne of texts)
    std::string name = "Bro";
    std::string day = "friday";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << y << " years old." << '\n';
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';
    std::cout << currency<< '\n';
    return 0;
};