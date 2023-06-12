#include <stdio.h>
// 텍스트 파일 내용을 표준출력에 출력
int main(int argc, char *argv[])
{
    FILE *fp;   // 파일 포인터 선언
    int c;      // 문자를 저장할 변수 선언

    if (argc < 2)
    {
        // 프로그램 실행 시 인자가 없는 경우
        fp = stdin;     // 표준 입력(stdin)을 파일 포인터에 할당
    }
    else
    {
        // 프로그램 실행 시 파일 이름이 인자로 전달된 경우
        fp = fopen(argv[1], "r");   // 전달된 파일 이름을 읽기 모드로 열어 파일 포인터에 할당
    }

    c = getc(fp);   // 파일로부터 문자 하나를 읽어와 c 변수에 저장

    while (c != EOF)
    {
        putc(c, stdout);    // 읽어온 문자를 표준 출력(stdout)에 출력
        c = getc(fp);       // 다음 문자를 읽어옴
    }

    fclose(fp);     // 파일 포인터가 가리키는 파일을 닫음

    return 0;
}
