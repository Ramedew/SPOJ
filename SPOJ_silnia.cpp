#include <iostream>

int ile, liczba;
long double D, J;
long int silnia(int n)
{
    if(n == 0 || n == 1) return 1;
    else return silnia(n-1)*n;
}
int main()
{
    std::cin>>ile;
    if(ile >= 1 && ile <= 30)
    {
        for(int i = 0; i<ile; i++)
        {
            std::cin>>liczba;
            if(liczba>=0 && liczba<=1000000000)
            {
                if(liczba<10)
                {
                    D = (silnia(liczba)%100)/10;
                    J = silnia(liczba)%10;
                }
                else
                {
                    D = 0;
                    J = 0;
                }
                std::cout<<D<<" "<<J<<std::endl;
            }
        }
    }
}