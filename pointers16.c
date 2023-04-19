nclude <stdio.h>
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
int i=10;
return &i;
}

//Output: Segmentation fault
