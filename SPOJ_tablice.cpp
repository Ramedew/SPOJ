#include <iostream>

int t, ile, *tab1, *tab2;
int main()
{
   std::cin>>t;
   for(int i = 0; i<t; i++)
   {
    std::cin>>ile;
    tab1 = new int [ile];
    int *wskaznik = tab1; 
    for(int j = 0; j<ile; j++)
    {
        *wskaznik = j;
        std::cin>>*wskaznik;
        wskaznik++;
    }
    for(int j = ile-1; j>=0; j--)
    {
        std::cout<<tab1[j]<<" ";
    }
    std::cout<<std::endl;
   } 
}