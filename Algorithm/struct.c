#include <stdio.h>
typedef struct _foo {
    char name[30];
    int age:16;
    int sex:16;
} foo;
int main()
{
    /* 我的第一个 C 程序 */
    printf("Hello, World! \n");
    printf("%d\n", sizeof(foo));   // 40
    return 0;
}
