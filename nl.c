#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int c;
    int count = 1;
    if (argc < 2)
        fp = stdin;                     
    else fp = fopen(argv[1], "r");      

    c = getc(fp);                       
    printf("%3d ", count++);
    while(c != EOF){
        putc(c, stdout);                
        if(c == '\n')
        {
            printf("%3d ", count);
            count++;
        }
        c = getc(fp);
    }

    fclose(fp);
    return 0;
}