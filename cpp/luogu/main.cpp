#include"main.hpp"
#include<iostream>
int main()
{
    std::string choose;
    do{
        for(const auto &i:menu)
            std::cout<<i.first<<std::endl;
        std::getline(std::cin,choose);
        menu[choose]();
    }
    while (choose.empty());
    
}