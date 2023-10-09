//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//
//int main()
//{
//    char c;
//    c = getch();
//    if(c==0)
//    {
//        char spec;
//        spec=getch();
//        printf("%d", spec);
//    }
//    else
//    {
//        printf("%d", c);
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//
//int main()
//{
//    int cod;
//    scanf("%d", &cod);
//    putch(cod);
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//int main()
//{
//    char s[10];
//    gets(s);
//    printf("%d %d %d %d", s[0], s[1], s[2], s[3]);
//    return 0;
//}

//int main ()
//{
//    char lit;
//    scanf("%c", &lit);
//    lit = lit - 'a'+'A';
//    printf ("%c", lit);
//    return 0;
//}
//int main()
//{
//    float x, y;
//    scanf("%f %f", &x, &y);
//    printf ("%-10s| %-10s| %-10s| %-10s| %-10s| %-10s|\n", "x", "y", "x+y", "x-y", "x*y", "x/y");
//    printf("----------------------------------------------------------------------\n");
//    printf("%10.2f| %10.2f| %10.2f| %10.2f| %10.2f| %10.2f|\n", x, y, x+y, x-y, x*y, x/y);
//    return 0 ;
//}
int main()
{
    int n;
    scanf("%d",&n);
    printf("octal: %o\n", n);
    printf("hexazecimal: %x\n", n);
    return 0;
}
