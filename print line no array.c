#include<stdio.h>
#include<conio.h>
int main()
{
    int c='\0';
    int n;
    scanf("%d\n",&n);
    while ( n>0 )
    {
          n--; 
          //scanf("%c",&c);
          c=getchar();
          while (c!='\n')
          {
                
                if( c>=65 && c<=90 )
                c+=32;
                putchar(c);
                //scanf("%c",&c);
                c=getchar();
          }
          putchar('\n');    
    }
    getch();
    return 0;
}
                
