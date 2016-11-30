#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    do
    {
        printf("height: ");
        x = get_int();
    }
    while(x <= 0 || x > 23);
    
    for (int i = 0; i < x; i++)
    {
        for(int j = 0; j < x-1-i; j++)
        {
            printf(" ");
        }
        for(int k =0; k<i; k++)
        {
            printf("#");
        }
        printf("##\n");
        
    }
    
}
