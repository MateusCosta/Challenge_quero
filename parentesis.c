#include <stdio.h>
#include <string.h>
int verifica_parenteses(char[]);
int main (void) {
   char entrada[100];
   
  gets(entrada);
   if(verifica_parenteses(entrada) == 1)
   {
      printf("true");
      printf("\n");
      return 0;
   }
   
     printf("false");
     printf("\n");
     return 0;
   
}


int verifica_parenteses(char entrada[]){
  
   int tamanho = strlen(entrada);
   int saldo =0;
;
    for (int i = 0; i < tamanho; i++) 
    {
      if(entrada[i] == '(' )
      {
          saldo++;
      }else if(entrada[i] == ')' ){
          saldo--;
      }
        if(saldo <0)
        {
            return 0;
        }
   }

    if(saldo == 0)
        return 1; 
    
    return 0;
    
}
