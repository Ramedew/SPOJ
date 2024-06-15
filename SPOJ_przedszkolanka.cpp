#include <iostream>

int nwd(int a, int b)
{
   while(a != 0 || b != 0)
   {
        if(a>b)
        {
            a = a%b;
        }
        else
        {
            b = b%a;
        }
        if(a == 0) return b;
        else if(b == 0) return a;
   }
   return 0;
}
int ile, a, b, cukierki, sumaA, sumaB;
int main()
{
    std::cin>>ile;
    for(int i = 0; i<ile; i++)
    {
        std::cin>>a>>b;
        if((a>=10 && a<=30) && (b>=10 && b<=30))
        {
            if(a%b != 0 && b%a != 0) cukierki = (a*b)/nwd(a,b);
            else if(a%b == 0) cukierki = a;
            else if(b%a == 0) cukierki = b;
        }
        std::cout<<cukierki<<std::endl;
    }
    return 0;
}