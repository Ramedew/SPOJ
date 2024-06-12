#include <iostream>

int a,b,c,suma;
int main()
{
    std::cin>>a>>b>>c;
    if(a<=100 && b<=100 && c<=100)
    {
        suma = a+b+c;
        std::cout<<suma;
    }
}