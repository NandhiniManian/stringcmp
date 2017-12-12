#include<stdio.h>
void main()
{
char a[30],b[30];
int i=0;
printf("Enter the two strings:\n");
gets(a);
gets(b);
while(a[i]==b[i]&&a[i]!='\0')
{
i++;
if(a[i]>b[i])
printf("a>b");
else if(a[i]<b[i])
printf("a<b");
else
printf("a=b");
}
}
