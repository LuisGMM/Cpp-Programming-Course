#include <iostream>
#include <string>


int main(){

    std::cout << "Hello C++20";

    int age = 21;
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error message: Something went wrong." << std::endl;
    std::clog << "Log message: Something Happened." << std::endl;

    //
    std::string name;
    int age1;

    std::cout << "Please type your name and your age: " << std::endl;

    // std::cin >> name;
    // std::cin >> age1;

    // Equivalent to 

    // std::cin >> name >> age1;

    // Use this method to get all the line

    std::getline(std::cin, name);
    std::cin >> age1;

    std::cout << "Hello " << name << ", you are " << age1 << std::endl;



}