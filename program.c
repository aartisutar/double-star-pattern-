#include<stdio.h>
#define kgf printf
#define adhira scanf
#define babu for
#define MAX 4

void good ();

 int a = 0; ///global variable

 main ()
 {
     /// this statment created to print pass code
     good();
     kgf (" \n This is kgf");
     }
void good()
{
    static int i = 5;
    babu (int i = 0; i<MAX; i++)
    {
        kgf(" \n kgf Apple");
    }
}
