#include <iostream>

int ile, liczba;
int main()
{
    std::cin>>ile;
    if(ile>0 && ile<100000)
    {
        for(int i = 0; i<ile; i++)
        {
            std::cin>>liczba;
            if(liczba>= 1 && liczba<=10000)
            {
                if((liczba == 2 || liczba == 3) || (liczba%2!=0 && liczba%3!=0)) 
                {
                    if(liczba == 1) std::cout<<"NIE"<<std::endl;
                    else std::cout<<"TAK"<<std::endl;
                }
                else std::cout<<"NIE"<<std::endl;
            }
        }
    }
}