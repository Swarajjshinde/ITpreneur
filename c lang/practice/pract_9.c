/*4. Check if a Character is a Vowel or Consonant
Use logical operators and if-else to classify the character.*/

#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter your character:");
    scanf("%c",&alpha);

    if(alpha=='a'|| alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u'){
        printf("%c is a vowel...",alpha);
    }
    else{
        printf("%c is a consonant...",alpha);
    }
}