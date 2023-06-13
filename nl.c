#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *fp;             // 파일 포인터를 선언합니다.
    int c;                // 문자를 저장할 변수 c를 선언합니다.
    int count = 1;        // 라인 번호를 저장할 변수 count를 선언하고 1로 초기화합니다.

    if (argc < 2)         // 명령어 인수로 파일명이 제공되지 않았을 경우
        fp = stdin;       // 표준 입력(stdin)을 파일 포인터에 할당합니다.
    else
        fp = fopen(argv[1], "r");  // 인수로 제공된 파일명을 읽기 모드로 엽니다.

    c = getc(fp);         // 파일로부터 문자를 읽어 변수 c에 저장합니다.
    printf("%3d ", count++);   // 라인 번호를 출력하고 count 변수를 1 증가시킵니다.

    while (c != EOF) {    // 파일의 끝(EOF)을 만날 때까지 반복합니다.
        putc(c, stdout);  // 문자를 표준 출력에 출력합니다.

        if (c == '\n') {  // 만약 문자가 개행 문자('\n')라면
            printf("%3d ", count);  // 새로운 라인 번호를 출력합니다.
            count++;         // count 변수를 1 증가시킵니다.
        }

        c = getc(fp);    // 다음 문자를 읽어 변수 c에 저장합니다.
    }

    fclose(fp);           // 파일을 닫습니다.
    return 0;             // 프로그램을 성공적으로 종료합니다.
}
