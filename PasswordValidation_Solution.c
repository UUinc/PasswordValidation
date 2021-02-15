#include <stdio.h>
#include <string.h>

int PasswordValidator(char password[]);

int main() 
{
    char password[50];
    
    scanf("%s",password);
     
    if(PasswordValidator(password))
        printf("Strong");
    else
        printf("Weak");
    
    return 0;
}
//Validator Function check if password over than 7 characters and contain 2 numbers and 2 special chars
int PasswordValidator(char password[])
{
    int i, j, len, numbers=0, specialChars=0;
    char special[7]={'!', '@', '#', '$', '%', '&', '*'};
    
    len = strlen(password);//password length
    
    if(len < 7)
        return 0;
    
    for(i = 0; i < len; i++)
    {
        if(password[i] >= '0' && password[i] <= '9')
             numbers++;
             
        for(j = 0; j < strlen(special); j++)
        {
             if(password[i] == special[j])
                 specialChars++;
        }
        
        if(numbers >= 2 && specialChars >= 2)
            return 1;
    }   
    
    return 0;
}
