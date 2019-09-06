#include <stdio.h>
#include <string.h>
int verifica_anagrama(char[], char[]);
int main (void) 
{
   char primeira[100], segunda[100];
   
   gets(primeira);
   gets(segunda);
   
   if(verifica_anagrama(primeira,segunda) == 1)
   {
      printf("true");
      printf("\n");
      return 0;
   }
   
     printf("false");
     printf("\n");
     return 0;
   
}


int verifica_anagrama(char primeira[], char segunda[])
{
    char temp;

   int i, j;
   int tamanho_primeira  = strlen(primeira);
   int tamanho_segunda = strlen(segunda);


   if( tamanho_primeira != tamanho_segunda) 
   {    
        return 0;
   }
   
    for ( i = 0; i < tamanho_primeira-1; i++) 
	{
      for (j = i+1; j < tamanho_primeira; j++) 
	  {
         if (primeira[i] > primeira[j]) 
		 {
            temp  = primeira[i];
            primeira[i] = primeira[j];
            primeira[j] = temp;
         }
         if (segunda[i] > segunda[j]) 
		 {
            temp  = segunda[i];
            segunda[i] = segunda[j];
            segunda[j] = temp;
         }
      }
   }


    for( i = 0; i<tamanho_primeira; i++) 
	{
        if(primeira[i] != segunda[i]) 
		{    
            return 0;
      }
   }

   
   return 1;
    
}
