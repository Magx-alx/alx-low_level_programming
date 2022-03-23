#include "main.h"

/**
 * strcat - concatnete array of character
 * @s1,s2: the number char arrays.
 * ptr: the pointer
 */

char *_strcat(char *a,char *b)
{
    int l1 , l2;
    int i;
    l1 = len (a);
    l2 = len (b);
  
    for(i = 0;i < l2; i++)
    {
        a[l1 + i] = b[i];
    }
    return (a);
}

int len (char *s)
{
    int i;
    int l = 0;
  
    for(i = 0;s[i] != '\0';i++)
    {
        l++;
    }
    return (l);
}
