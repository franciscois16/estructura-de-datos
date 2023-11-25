 #include <stdio.h>
 int main(void){
 int a,b,c,*p1,*p2;
 p1 = &a;
 *p1 = 1;
 p2 = &b;
 b = 2;
 p1 = p2;
 *p1 = 0;
 p2 = &c;
 *p2 = 3;
 printf("%d %d %d\n",a,b,c);
 return 0;
 }

// p1 = &a;: p1 apunta a la dirección de memoria de a.
// *p1 = 1;: El valor de a se establece en 1.
// p2 = &b;: p2 apunta a la dirección de memoria de b.
// b = 2;: El valor de b se establece en 2.
// p1 = p2;: p1 ahora apunta a la misma dirección que p2 (la dirección de memoria de b).
// *p1 = 0;: El valor de b se establece en 0, ya que p1 y p2 apuntan a la misma dirección.
// p2 = &c;: p2 ahora apunta a la dirección de memoria de c.
// *p2 = 3;: El valor de c se establece en 3.