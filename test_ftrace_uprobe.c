#include <stdio.h>

void hello1(int v)
{
    printf("%d\n", v);
}

void hello2(int v, char *s)
{
    printf("v=%d, s=%s\n", v, s);
}

struct Member {
    unsigned int age;
    const char *name;
};

void hello3(int v, char *s, const struct Member *m)
{
    printf("v=%d, s=%s, (Member){%u, %s}\n", v, s, m->age, m->name);
}

int main()
{
    hello1(11);
    hello2(22, "claire");
    hello3(33, "ray", &(struct Member) {37, "Bruce"});

    return 0;
}
