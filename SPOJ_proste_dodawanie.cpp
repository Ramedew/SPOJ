#include <iostream>

int t,n,suma;
int main()
{
    std::cin>>t;
    if(t>0 && t<100)
    {
      for(int i = 0; i<t; i++)
      {
        std::cin>>n;
        int tab[n];
        suma = 0;
        for(int j = 0; j<n; j++)
        {
            std::cin>>tab[j];
            suma+=tab[j];
        }
        std::cout<<suma<<std::endl;
      }  
    }
}