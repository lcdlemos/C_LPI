#include<stdio.h>

main(){
    int a=5, *pa=&a, b=12, *pb=&b, c=13, *pc=&c, v[3]={10,20,30}, *pv;

    printf("Ponteiros\n\n");

    printf(" a = %d\n", a);
    printf(" b = %d\n", b);
    printf(" c = %d\n\n", c);

    printf(" &a = %d\n", &a);
    printf(" &b = %d\n", &b);
    printf(" &c = %d\n\n", &c);

    printf(" *pa = %d\n", *pa);
    printf(" *pb = %d\n", *pb);
    printf(" *pc = %d\n\n", *pc);

    printf(" pa = %d\n", pa);
    printf(" pb = %d\n", pb);
    printf(" pc = %d\n\n", pc);

    printf(" &pa = %d\n", &pa);
    printf(" &pb = %d\n", &pb);
    printf(" &pc = %d\n\n", &pc);

    pv = v;
    printf(" %d %d\n", v[0], *pv);

    pv = &v[2];
    printf(" %d %d\n\n", v[2], *pv);
}
