
#include <iostream>

using namespace std;

void swap_metod(int* a, int* b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


int main()
{
    int a = 5;
    int b = 8;
    int* ptra = &a;
    int* ptrb = &b;

    std::cout << "a = " << a << ", ";
    std::cout << "b = " << b << std::endl;

    swap_metod(&a, &b);

    std::cout << "a = " << a << ", ";
    std::cout << "b = " << b << std::endl;
}
