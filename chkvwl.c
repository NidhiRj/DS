#include <stdio.h>
void main() 
{
    char c;
    int lwr_vowel, uppr_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    lwr_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    
    uppr_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (lwr_vowel || uppr_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
}
