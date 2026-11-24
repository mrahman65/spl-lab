#include<stdio.h>
int main()
{char s[200];
int n = 0;
scanf("%199s", s);
while (s[n] != '\0') {
    n++;
}
printf("Length = %d", n);   //
}