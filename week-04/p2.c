#include<stdio.h>
int main()
{int i=0;
char s[100];
scanf("%99s", s);
while(s[i]>='A' && s[i]<='Z')
i++;
printf("UPERCASE:%d",i); 
}