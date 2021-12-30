#include<stdio.h>
int a=1,sno,b=1,c=1,d=1,j,bs,se,n,o;
int snog,snoa,snob;
char seet[20],name[100],busgokak[20],busgoa[20],busxyz[20],busabc[20];

struct busgokak
{
  char name[50];
}gok1,gok2,gok3,gok4,gok5,gok6,gok7,gok8,gok9,gok10,gok11,gok12,gok13,gok14,gok15,gok16,gok17,gok18,gok19,gok20;

void printgokak()
{
  printf("\n-----gokak bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",gok1.name,gok2.name,gok3.name,gok4.name,gok5.name,gok6.name,gok7.name,gok8.name,gok9.name,gok10.name,gok11.name,gok12.name,gok13.name,gok14.name,gok15.name,gok16.name,gok17.name,gok18.name,gok19.name,gok20.name);
}



struct busgoa
{
  char name[50];
}goa1,goa2,goa3,goa4,goa5,goa6,goa7,goa8,goa9,goa10,goa11,goa12,goa13,goa14,goa15,goa16,goa17,goa18,goa19,goa20;

void printgoa()
{
  printf("\n-----goa bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",goa1.name,goa2.name,goa3.name,goa4.name,goa5.name,goa6.name,goa7.name,goa8.name,goa9.name,goa10.name,goa11.name,goa12.name,goa13.name,goa14.name,goa15.name,goa16.name,goa17.name,goa18.name,goa19.name,goa20.name);
}


struct busxyz
{
  char name[50];
}xyz1,xyz2,xyz3,xyz4,xyz5,xyz6,xyz7,xyz8,xyz9,xyz10,xyz11,xyz12,xyz13,xyz14,xyz15,xyz16,xyz17,xyz18,xyz19,xyz20;

void printxyz()
{
  printf("\n-----xyz bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",xyz1.name,xyz2.name,xyz3.name,xyz4.name,xyz5.name,xyz6.name,xyz7.name,xyz8.name,xyz9.name,xyz10.name,xyz11.name,xyz12.name,xyz13.name,xyz14.name,xyz15.name,xyz16.name,xyz17.name,xyz18.name,xyz19.name,xyz20.name);
}


struct busabc
{
  char name[50];
}abc1,abc2,abc3,abc4,abc5,abc6,abc7,abc8,abc9,abc10,abc11,abc12,abc13,abc14,abc15,abc16,abc17,abc18,abc19,abc20;

void printabc()
{
  printf("\n-----abc bus------\n1.%s\t2.%s\n3.%s\t4.%s\n5.%s\t6.%s\n7.%s\t8.%s\n9.%s\t10.%s\n11.%s\t12.%s\n13.%s\t14.%s\n15.%s\t16.%s\n17.%s\t18.%s\n19.%s\t20.%s\n",abc1.name,abc2.name,abc3.name,abc4.name,abc5.name,abc6.name,abc7.name,abc8.name,abc9.name,abc10.name,abc11.name,abc12.name,abc13.name,abc14.name,abc15.name,abc16.name,abc17.name,abc18.name,abc19.name,abc20.name);
}


void id()
{
  char id[100],pass[100];
  printf("\nenter user id: ");
  scanf("%s",id);
  printf("\nenter password: ");
  scanf("%s",pass);
  printf("\n-----login compleated------\n");
}
void pushgokak()
{
  printgokak();
  if(a>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet no: ");
      scanf("%d",&sno);
      a++;
      switch(sno)
      {
        
        
        case 1:  printf("\nenter name: ");
          scanf("%s",gok1.name) ;
            break;
        case 2:  printf("\nenter name: ");
          scanf("%s",gok2.name) ;
            break;
    
        case 3: 
          printf("\nenter name: ");
          scanf("%s",gok3.name) ;
            break;
    
        case 4: printf("\nenter name: ");
          scanf("%s",gok4.name) ;
            break;
          case 5: printf("\nenter name: ");
          scanf("%s",gok5.name) ;
            break;

        case 6:  printf("\nenter name: ");
          scanf("%s",gok6.name) ;
            break;
        case 7:  printf("\nenter name: ");
          scanf("%s",gok7.name) ;
            break;
    
        case 8: 
          printf("\nenter name: ");
          scanf("%s",gok8.name) ;
          break;
    
        case 9: printf("\nenter name: ");
          scanf("%s",gok9.name) ;
            break;
        case 10: printf("\nenter name: ");
          scanf("%s",gok10.name) ;
            break;
    
        case 11:  printf("\nenter name: ");
          scanf("%s",gok11.name) ;
            break;
        case 12:  printf("\nenter name: ");
          scanf("%s",gok12.name) ;
            break;
    
        case 13: 
          printf("\nenter name: ");
          scanf("%s",gok13.name) ;
            break;
    
        case 14: printf("\nenter name: ");
          scanf("%s",gok14.name) ;
            break;
        case 15: printf("\nenter name: ");
          scanf("%s",gok15.name) ;
            break;
    
        case 16:  printf("\nenter name: ");
          scanf("%s",gok16.name) ;
            break;
        case 17:  printf("\nenter name: ");
          scanf("%s",gok17.name) ;
            break;
    
        case 18: 
          printf("\nenter name: ");
          scanf("%s",gok18.name) ;
            break;
    
        case 19: printf("\nenter name: ");
          scanf("%s",gok19.name) ;
            break;
        case 20: printf("\nenter name: ");
          scanf("%s",gok20.name) ;
            break;
        default:a--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}
void pushgoa()
{
  printgoa();
  if(b>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet no: ");
      scanf("%d",&sno);
      b++;
      switch(sno)
      {
        
        
        case 1:  printf("\nenter name: ");
          scanf("%s",goa1.name) ;
            break;
        case 2:  printf("\nenter name: ");
          scanf("%s",goa2.name) ;
            break;
    
        case 3: 
          printf("\nenter name: ");
          scanf("%s",goa3.name) ;
            break;
    
        case 4: printf("\nenter name: ");
          scanf("%s",goa4.name) ;
            break;
          case 5: printf("\nenter name: ");
          scanf("%s",goa5.name) ;
            break;

        case 6:  printf("\nenter name: ");
          scanf("%s",goa6.name) ;
            break;
        case 7:  printf("\nenter name: ");
          scanf("%s",goa7.name) ;
            break;
    
        case 8: 
          printf("\nenter name: ");
          scanf("%s",goa8.name) ;
          break;
    
        case 9: printf("\nenter name: ");
          scanf("%s",goa9.name) ;
            break;
        case 10: printf("\nenter name: ");
          scanf("%s",goa10.name) ;
            break;
    
        case 11:  printf("\nenter name: ");
          scanf("%s",goa11.name) ;
            break;
        case 12:  printf("\nenter name: ");
          scanf("%s",goa12.name) ;
            break;
    
        case 13: 
          printf("\nenter name: ");
          scanf("%s",goa13.name) ;
            break;
    
        case 14: printf("\nenter name: ");
          scanf("%s",goa14.name) ;
            break;
        case 15: printf("\nenter name: ");
          scanf("%s",goa15.name) ;
            break;
    
        case 16:  printf("\nenter name: ");
          scanf("%s",goa16.name) ;
            break;
        case 17:  printf("\nenter name: ");
          scanf("%s",goa17.name) ;
            break;
    
        case 18: 
          printf("\nenter name: ");
          scanf("%s",goa18.name) ;
            break;
    
        case 19: printf("\nenter name: ");
          scanf("%s",goa19.name) ;
            break;
        case 20: printf("\nenter name: ");
          scanf("%s",goa20.name) ;
            break;
        default:b--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}
void pushxyz()
{
  printxyz();
  if(c>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet no: ");
      scanf("%d",&sno);
      c++;
      switch(sno)
      {
        
        
        case 1:  printf("\nenter name: ");
          scanf("%s",xyz1.name) ;
            break;
        case 2:  printf("\nenter name: ");
          scanf("%s",xyz2.name) ;
            break;
    
        case 3: 
          printf("\nenter name: ");
          scanf("%s",xyz3.name) ;
            break;
    
        case 4: printf("\nenter name: ");
          scanf("%s",xyz4.name) ;
            break;
          case 5: printf("\nenter name: ");
          scanf("%s",xyz5.name) ;
            break;

        case 6:  printf("\nenter name: ");
          scanf("%s",xyz6.name) ;
            break;
        case 7:  printf("\nenter name: ");
          scanf("%s",xyz7.name) ;
            break;
    
        case 8: 
          printf("\nenter name: ");
          scanf("%s",xyz8.name) ;
          break;
    
        case 9: printf("\nenter name: ");
          scanf("%s",xyz9.name) ;
            break;
        case 10: printf("\nenter name: ");
          scanf("%s",xyz10.name) ;
            break;
    
        case 11:  printf("\nenter name: ");
          scanf("%s",xyz11.name) ;
            break;
        case 12:  printf("\nenter name: ");
          scanf("%s",xyz12.name) ;
            break;
    
        case 13: 
          printf("\nenter name: ");
          scanf("%s",xyz13.name) ;
            break;
    
        case 14: printf("\nenter name: ");
          scanf("%s",xyz14.name) ;
            break;
        case 15: printf("\nenter name: ");
          scanf("%s",xyz15.name) ;
            break;
    
        case 16:  printf("\nenter name: ");
          scanf("%s",xyz16.name) ;
            break;
        case 17:  printf("\nenter name: ");
          scanf("%s",xyz17.name) ;
            break;
    
        case 18: 
          printf("\nenter name: ");
          scanf("%s",xyz18.name) ;
            break;
    
        case 19: printf("\nenter name: ");
          scanf("%s",xyz19.name) ;
            break;
        case 20: printf("\nenter name: ");
          scanf("%s",xyz20.name) ;
            break;
        default:c--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}
void pushabc()
{
  printabc();
  if(d>20)
  {
    printf("\nseet is full");
  }
  else
  {
  
    printf("\nenter no of seets: ");
    scanf("%d",&n);
    for(o=0;o<n;o++)
    {
      printf("\nenter seet no: ");
      scanf("%d",&sno);
      d++;
      switch(sno)
      {
        
        
        case 1:  printf("\nenter name: ");
          scanf("%s",abc1.name) ;
            break;
        case 2:  printf("\nenter name: ");
          scanf("%s",abc2.name) ;
            break;
    
        case 3: 
          printf("\nenter name: ");
          scanf("%s",abc3.name) ;
            break;
    
        case 4: printf("\nenter name: ");
          scanf("%s",abc4.name) ;
            break;
          case 5: printf("\nenter name: ");
          scanf("%s",abc5.name) ;
            break;

        case 6:  printf("\nenter name: ");
          scanf("%s",abc6.name) ;
            break;
        case 7:  printf("\nenter name: ");
          scanf("%s",abc7.name) ;
            break;
    
        case 8: 
          printf("\nenter name: ");
          scanf("%s",abc8.name) ;
          break;
    
        case 9: printf("\nenter name: ");
          scanf("%s",abc9.name) ;
            break;
        case 10: printf("\nenter name: ");
          scanf("%s",abc10.name) ;
            break;
    
        case 11:  printf("\nenter name: ");
          scanf("%s",abc11.name) ;
            break;
        case 12:  printf("\nenter name: ");
          scanf("%s",abc12.name) ;
            break;
    
        case 13: 
          printf("\nenter name: ");
          scanf("%s",abc13.name) ;
            break;
    
        case 14: printf("\nenter name: ");
          scanf("%s",abc14.name) ;
            break;
        case 15: printf("\nenter name: ");
          scanf("%s",abc15.name) ;
            break;
    
        case 16:  printf("\nenter name: ");
          scanf("%s",abc16.name) ;
            break;
        case 17:  printf("\nenter name: ");
          scanf("%s",abc17.name) ;
            break;
    
        case 18: 
          printf("\nenter name: ");
          scanf("%s",abc18.name) ;
            break;
    
        case 19: printf("\nenter name: ");
          scanf("%s",abc19.name) ;
            break;
        case 20: printf("\nenter name: ");
          scanf("%s",abc20.name) ;
            break;
        default:d--;
          printf("\ninvalid choice");
    
      }
    }
  } 
 
  
}
void see()
{
  printf("\n1.GOKAK\n2.GOA\n3.xyz\n4.abc");
  scanf("%d",&se);
  switch(se)
  {
    case 1: printgokak();
        break;
    case 2: printgoa();
        break;
    case 3:  printxyz();
        break;
    case 4: printabc();
        break;
    default:printf("\ninvalid choice");
  }
}
void XYZ()
{
 // printxyz();
  pushxyz();
}
void ABC()
{
 // printabc();
  pushabc();
}
void GOKAK()
{
  //printgokak();
  pushgokak();
}
void GOA()
{
  //printgoa();
  pushgoa();
}
//RESURVE
void bus_resurve()
{
  int ch;
  printf("\n1.GOKAK\n2.GOA\n3.xyz\n4.abc");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: GOKAK();
        break;
    case 2: GOA();
        break;
    case 3: XYZ();
        break;
    case 4: ABC();
        break;
    default:printf("\ninvalid choice");
  }
}
int main()
{
  int bus,ch,i;
  for(i=1;i<=20;i++)
  {
    busgoa[i]=0;
    busgokak[i]=0;
    busxyz[i]=0;
    busabc[i]=0;
    
  }
  id();
  while(1)
  {
    int bsc;
    printf("\nEnter \n1.resurve bus\n2.see bus\n3.delete");
    scanf("%d",&bsc);
    switch(bsc)
    {
      case 1:bus_resurve();
            break;
      case 2:see();
            break;
      case 3: ;
    }
  }


}