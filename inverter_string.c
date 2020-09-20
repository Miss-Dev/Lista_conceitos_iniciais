#include <stdio.h>
#include <string.h>

void inverte(char *string, int tamanho){
  if(tamanho<0){    
    printf("\n");
  }
  else{
    putchar(string[tamanho-1]);
    inverte(string, tamanho-1);
    
  }
}

int main(){
   char *palavra = "chocolate";
   int tam = strlen(palavra);
   inverte(palavra, tam);
      
   return 0;
}
