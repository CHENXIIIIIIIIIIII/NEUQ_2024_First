#include<stdio.h>
struct n {
    int x;
    char c;
};
void func(struct n b)
{
    b.x = 20;
    b.c= 'y';
}
main()
{
    struct n a = {10, 'x'};
    func(a);
    printf ("%d,%c", a.x,a.c);
}