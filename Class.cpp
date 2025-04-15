#include "Class.h"
#include <iostream>


Student::Student(std::string par_name, int32_t par_id) : name{par_name}
{
    /*
        Initialization can be done
        1. directly in the declaration
        2. in the initializer list of the constructor definition
        3. in the constructor itself
    */
    id_number = par_id;
}
void Student::print() const
{
    std::cout << "********** Student ************" << std::endl;
    std::cout << "name: " << name << std::endl;
    // we can use the "this" pointer to make the usage 100% clear
    std::cout << "id: " << this->id_number << std::endl;
    std::cout << "num of exams: " << num_of_exams << std::endl;
    std::cout << "*******************************" << std::endl;
}