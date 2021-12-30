
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct busgokak
{
  char name[50];
}gok1,gok2,gok3,gok4,gok5;

int main()
{
  int i;
  char s[100],k[100];
  scanf("%d",&i);
 
  switch(i)
  {
    case 1: scanf("%s",gok1.name) ;
    break;
    case 2: scanf("%s",gok2.name) ;
    break;
    
    case 3: scanf("%s",gok3.name) ;
    break;
    
    case 4: scanf("%s",gok4.name) ;
    break;
    case 5: scanf("%s",gok5.name) ;
    break;

  }
  
  printf("1.%s\t2.%s\n3.%s\t4.%s\n5.%s\n",gok1.name,gok2.name,gok3.name,gok4.name,gok5.name);
  
 
  return 0;
}
void printgokak()
{
  printf("1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok1.name,gok2.name,gok3.name,gok4.name,gok5.name);
}
void printgoa()
{
  for(j=1;j<=20;j++)
  {
    printf("\n%s",busgoa[j]);
  }
}
void printxyz()
{
  for(j=1;j<=20;j++)
  {
    printf("\n%s",busxyz[j]);
  }
}
void printabc()
{
  for(j=1;j<=20;j++)
  {
    printf("\n%s",busabc[j]);
  }
}