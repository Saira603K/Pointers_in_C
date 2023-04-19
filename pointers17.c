#include <stdio.h>
int *returnFunc();
int main()
{
int *ptr=returnFunc();
printf("\n *ptr = %d",*ptr);
printf("\n *ptr = %d",*ptr);
printf("\n *ptr = %d",*ptr);
return 0;
}
int *returnFunc()
{
static int i=10;
return &i;
}

//Output:
//*ptr = 10
//*ptr = 10
//*ptr = 10
