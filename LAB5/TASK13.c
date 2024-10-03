#include<stdio.h>
int main() 
{
    char character , encrypted , decrypted ;
    int key ;  
    printf("Enter a character to encrypt:") ;
    scanf("%c",&character) ;
    printf("Enter The Key:") ;
    scanf("%d",&key) ;
    encrypted = character ^ key ;
    printf("Encrypted character:%c\n",encrypted) ;
    decrypted = encrypted ^ key ;
    printf("Decrypted character:%c\n",decrypted) ;
    return 0 ;
}
