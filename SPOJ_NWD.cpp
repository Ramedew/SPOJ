#include <iostream>

int ile, a, b;
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
int main()
{
    std::cin>>ile;
    for(int i = 0; i<ile; i++)
    {
        std::cin>>a>>b;
        std::cout<<nwd(a,b)<<std::endl;
    }
}