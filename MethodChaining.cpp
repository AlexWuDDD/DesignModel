//
// Created by Wu Alex on 2019/12/28.
//

#include <iostream>


int main()
{
    int i, j;
    std::cout << i << j;
    std::cout << std::endl;
    std::cout.operator<<(i).operator<<(j);
    return 0;
}
