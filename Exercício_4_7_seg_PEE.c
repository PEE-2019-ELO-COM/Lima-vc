#include <stdio.h>
int main()
{
char numero;
printf("escreva o numero de 0 a 9:\n");
scanf("%c",&numero);
char D=(numero&1),C=((numero>>1)&1),B=((numero>>2)&1),A=((numero>>3)&1), a=(C)||(A)||(B&&D)||((!B)&&(!D)), b=((!C)&&(!D))||(!B)||(C&&D), c=(D || B)||(!C), d=(A)||((!B)&&(!C))||(C&&(!B))||(C&&(!D))||((B&&(!C))&&D), e=((!B)&&(!D))||((C)&&(!D)), f=(A)||((!C)&&(!D))||(B&&(!C))||(B&&(!D)), g=A||(C&&(!D))||(B&&(!C))||(B&&(!C));
printf("%d%d%d%d%d%d%d",a,b,c,d,e,f,g);
return 0;
}
