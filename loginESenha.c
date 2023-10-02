#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "portuguese");
     char senhaCerta [250] = "1234";
     char senhaEscrever [250];
     char loginCerta  [250] = "paulo";
     char loginEscrever [250];


    
            
            printf("Login: ");
            gets(loginEscrever);

            printf("Senha: ");
            gets(senhaEscrever);


        

        if (strcmp(loginEscrever, loginCerta) == 0 && strcmp(senhaEscrever, senhaCerta) == 0){

            printf("Login Aceito");

        } else {

            printf("Tente novamente");
        }

        return 0;
        
        

       
    
    
    
    
    
    
    
    
    
    
    }