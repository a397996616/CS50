#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    printf("full name: ");
    char *name = get_string();
    
    printf("%c", toupper(name[0]));
    
    for(int i = 0; i < strlen(name); i++)
    {
        if(name[i] == ' ')
        {
            char c = name[i+1];
            
            printf("%c", toupper(c));
        }
    }
    printf("\n");
}
