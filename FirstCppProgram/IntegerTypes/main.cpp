#include <iostream>

int main(){

    int garbage_value;
    int num1 {10};
    int num2 (15);
    int new_number = num1 + num2;

    std::cout << "garbage_value " << garbage_value << std::endl; 
    std::cout << "num1 " << num1 << std::endl; 
    std::cout << "num2 " << num2 << std::endl; 
    std::cout << "new_number " << new_number << std::endl; 

    // This initialization is more strict
    // int conversion {2.9}; 

    // This initialization is truncate non int values. (Loses information)
    int conversion (2.9);

    std::cout << "conversion " << conversion << std::endl; 
    
}
