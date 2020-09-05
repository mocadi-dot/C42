#include <stdio.h>

int ft_strlen(char *str)
{
    int   longueur;
    int i;

    longueur = 0;
    i = 0;

    while (str[i] !='\0')
   
{
    longueur = longueur+1;
    i = i+1; 

}
 return longueur;

    
}
int main(int argc, char *argv[])
{

char str[255] = "hello";



    printf("%d\n",ft_strlen(str));

return 0;

    
}