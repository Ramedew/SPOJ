#include <iostream>

int main()
{
    int stack[11],ile, liczba,rozmiar = 0;
    char znak;
    while(std::cin>>znak)
    {
        switch(znak)
        {
        case '+':
            if (rozmiar >= 10)
            {                
                std::cin>>liczba;
                std::cout << ":(" << std::endl;   
            }
            else
            {
                rozmiar++;
                std::cin >> liczba;
                stack[rozmiar] = liczba;
                std::cout << ":)" << std::endl;
            }
            break;
        case '-':
            if (rozmiar >= 1)
            {
                std::cout << stack[rozmiar] << std::endl;
                rozmiar--;
            }
            else
            {
                std::cout << ":(" << std::endl;
            }
            break;
        default:
        exit(0);
        break;
    }
   }
}