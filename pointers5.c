#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void fun(char** str_ref)
{
str_ref++;
}
int main()
{
char *str = (void *)malloc(100*sizeof(char));
strcpy(str, "GeeksQuiz");
fun(&str);
puts(str);
free(str);
return 0;
}


//Output: GeeksQuiz
