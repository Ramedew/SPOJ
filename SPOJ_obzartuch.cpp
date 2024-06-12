#include <iostream>
#include <cmath>

int ile,N,M,suma;
int wynik;
int main()
{
    std::cin>>ile;
    for(int i = 0; i<ile; i++)
    {
        std::cin>>N>>M;
        int czas[N];
        suma = 0;
        if(N>=1 && N<=10000 &&M>=1 && M<=1000000000)
        {
            for(int j = 0; j<N; j++)
            {
                std::cin>>czas[j];
                if(czas[j]>0 && czas[j]<=100000)
                {
                    suma += (86400/czas[j]);
                }

            }
            wynik = suma/M;
            if(suma%M>0)
            {
                wynik++;
            }
            std::cout<<wynik<<std::endl;
        }
    }
    return 0;
}