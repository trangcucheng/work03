#include <stdio.h>
#include <conio.h>
#include <string.h>

char s[50]=" ";
char *bachuso(unsigned int n)
{
   char kyso[10][5]={"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
   int donvi,chuc,tram;
   s[0]=0;
   donvi=n%10;
   n/=10;
   chuc=n%10;
   tram=n/10;
   if (tram>0)
   {
       strcat(s,kyso[tram]);
       strcat(s," tram ");
   }
   if (chuc>0)
   {
       if (chuc==1) strcat(s," muoi ");
       else
       {
           strcat(s,kyso[chuc]);
           strcat(s," muoi ");
       }
       if (donvi>0)
       {
           if (tram!=0 && chuc==0)
           {
                strcat(s," le ");
                strcat(s,kyso[donvi]);
           }
           else if (donvi==5 && tram!=0 && chuc==0)
           {
               strcat(s," lam ");
           }
           else if (donvi==5 && chuc!=0 && tram !=0)
           {
               strcat(s," nam ");
           }
           else strcat(s,kyso[donvi]);
       }
   }
   return s;
}
char *bachuso2(char s1[],unsigned int n)
{
    char kyso[10][5]={"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    s1[0]=0;
    strcat(s1,"khong tram ");
    if ((n/10)==0 && (n%10)!=0) // n/10 la so hang chuc; n%10 la so hang don vi
    {
        strcat(s1,"le ");
        strcat(s1,kyso[n%10]);
    }
    else if ((n/10)==1 && (n%10)!=0)
    {
        strcat(s1," muoi ");
        if ((n%10)==5)
        {
            strcat(s1," lam ");
        }
         else    strcat(s1,kyso[n%10]);
    }
    else if ((n/10)!=0 && (n/10)!=1 && (n%10)==0)
    {
        strcat(s1,kyso[n/10]);
        strcat(s1," muoi ");
    }
    else if ((n/10)!=0 && (n%10)!=0)
    {
        strcat(s1,kyso[n/10]);
        strcat(s1," muoi ");
        if ((n%10)==5) strcat(s1,"lam ");
        else strcat(s1,kyso[n%10]);
    }
    return s1;
}

int main()
{
    unsigned long n;
    unsigned int ngan, trieu, ty, donvi;
    char chuoi[200],s1[50];
    printf("\nNhap mot so(>0 va <1 ty): ");
    scanf("%ld",&n);
    printf("So %ld doc thanh chu la:\n",n);
    if (n==0) printf("Khong");
    else
    {
        donvi=n%1000;
        n/=1000;
        ngan=n%1000;
        n/=1000;
        trieu=n%1000;
        ty=n/1000;
        if (ty>0)    printf("%s ty ", bachuso(ty));
        if (trieu>0)
        {
            if (trieu<100)
            {
                bachuso2(s1,trieu);
                printf("%s trieu ",s1);
            }
            else printf("%s trieu ", bachuso(trieu));
        }
        if (ngan> 0)
        {
            if (ngan<100)
            {
                bachuso2(s1,ngan);
                printf("%s ngan ",s1);
            }
            else printf("%s ngan ", bachuso(ngan));
        }
        if (donvi>0)
        {
            if (donvi<100)
            {
                bachuso2(s1,donvi);
                printf("%s",s1);
            }
            else printf("%s ",bachuso(donvi));
        }
    }
    getch();
}
