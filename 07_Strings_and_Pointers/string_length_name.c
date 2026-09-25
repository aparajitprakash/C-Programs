#include <stdio.h>

int main()
{
    char name[100];
    scanf( "%[^\n]s", name); // used "%[^\n]s" take full name 
    printf("%s\n", name );

    // fgets(name, 100, stdin); /*aparajit*/

    int count = 0;  // if you will use fgets, you need to use count=-1

    for (int i = 0; name[i] != '\0'; i++){

        count++;
    }

    // puts(name);
    printf("%d", count);

    return 0;
}
// 12345678 
/*  I don't like the way you talk but I like the way you speak, this not the to talk with or with any one else because you don't know the adicants that why  */