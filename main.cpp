#include "Class.h"
#include <iostream>

auto main() -> int
{
    Student student1{"John Doe", 12345};
    student1.print();

    Student student2{"Jane Smith", 67890};
    student2.print();
    student2.num_of_exams = 5;
    student2.print();
    return 0;

}