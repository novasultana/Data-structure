#include <stdio.h>
#include <stdlib.h>
#define MAX 50
char q[MAX],f=-1,r=-1;

void enq(char val)
{
                if(r == MAX-1)
                {
                     printf("queue is full and hence cannot insert");
                    
                }
                               
                else if(f == -1 && r == -1)
                {
                   f=r=0; 
                }
                                
                else
                { 
                    r=r+1;
                    
                }
                              
                q[r]=val;
}
char deq()
{
                char val;
                if(f == -1)
                {
                    printf("queue is empty");
                }
                                
                else
                {
                     val = q[f];
                     if(f == r)
                     {
                         f=r=-1;
                     }
                     
                     else
                     {
                        f=f+1;
                     }
                }
                return val;
}
int main()
{
                int i;
                char s[MAX];
                printf("\n\n\nInput data:");
                gets(s);
                printf("\n\n");
                for(i=0;s[i]!='\0';i++)
                {
                    if(s[i] != ' ')
                    {
                         enq(s[i]);
                        
                    }
                        
                }
                for(i= f;i<=r;i++)
                {
                     s[i]=deq(); 
                }
                              
                s[i]='\0';
                printf("Output data: ");
                puts(s);

}
