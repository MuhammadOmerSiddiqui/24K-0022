#include<stdio.h>
int main()
{
    int anyCharacter = 0 ;
    printf("ENTER ANY CHARACTER OF YOUR OWN CHOICE:") ;
    scanf("%c",&anyCharacter) ;
    if(anyCharacter==65 || anyCharacter==69 || anyCharacter==73 || anyCharacter==79 || anyCharacter==85 || anyCharacter==97 || anyCharacter==101 || anyCharacter==105 || anyCharacter==111 || anyCharacter==117)
    {
      printf("IT'S A VOWEL") ;
    }
    else if((anyCharacter>=65 && anyCharacter<=90) || (anyCharacter>=97 && anyCharacter<=122)) 
    {
      printf("IT'S A CONSONANT") ;
    }
    else if(anyCharacter>=48 && anyCharacter<=57)
    {
      printf("IT'S A DIGIT") ;
    }
    else if((anyCharacter>=32 && anyCharacter<=47) || (anyCharacter>=58 && anyCharacter<=64) || (anyCharacter>=32 && anyCharacter<=47) || (anyCharacter>=58 && anyCharacter<=64) || (anyCharacter>=91 && anyCharacter<=96) || (anyCharacter>=123 && anyCharacter<=126))
    {
      printf("IT'S A SPECIAL CHARACTER") ;
    } 
    return 0 ;
}