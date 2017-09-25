// Program to copy string from source to destination, K&R style
#include <stdio.h>

char *custom_strcpy(char *dest, const char *source)
{
    char *ptr = NULL;
    //ptr = dest;
    while(*dest++ = *source++)
        ;
    return dest;
}

int main()
{
    char *source = "Sandeep_Koli";
    char *dest = malloc(strlen(source) * sizeof(char));
    //printf("%d\n", strlen(source));
    custom_strcpy(dest, source);
    printf("%s\n", dest);

    return 0;
}
