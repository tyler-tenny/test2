#include "tree.h"
#include "tree.cpp"
#include "node.h"
#include <iostream>

template <typename T>
void print(T value)
{
    std::cout << "Value: " << value << std::endl;
}

template class tree<int>;

int main()
{
    std::cout << "tree binary test\n";
    tree<int> t;
    int values[20];

    for (int ii = 0; ii < 20; ii++)
    {
        int value = rand() % 1000;
        std::cout << "Inserting " << value << std::endl;
        t.Insert(value);
        values[ii] = value;
    }

    //t.Traverse(print);

    /*for (int ii = 0; ii < 20; ii++)
    {
        int value;
        if (ii % 2)
            value = rand() % 1000;
        else
            value = values[ii];

        bool found = tree.Contains(value);
        if (found)
            printf("Found %d\n", value);
        else
            printf("Not found: %d\n", value);
    }
    */
    return 0;
}
