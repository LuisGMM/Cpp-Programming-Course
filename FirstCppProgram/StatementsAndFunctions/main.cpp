#include <iostream>


int add(int first_number, int second_number){
    return first_number + second_number;
}

int mult(int first_number, int second_number){
    return first_number*second_number;
}
int main(){

    int first_number {13};
    int second_number = 7;

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;


    std::cout << "Sum: " << add(23, 123) << std::endl;



}