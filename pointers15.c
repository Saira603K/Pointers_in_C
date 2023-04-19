include <stdio.h>
int *returnPointer(int *p);
int main()
{
int i=10;
int *ptr1, *ptr2;
ptr1=&i;
ptr2=returnPointer(&i);
printf("\n *ptr1 = %d",*ptr1);
printf("\n *ptr2 = %d",*ptr2);
return 0;
}
int *returnPointer(int *pt)
{
return pt;
}

//Output: 
//*ptr1 = 10
// *ptr2 = 10
