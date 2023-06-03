#include <stdio.h>

int main(int argc, char *argv[])
{
    char c; // 문자를 저장할 변수
    FILE *fp1, *fp2; // 파일 포인터 선언

    if (argc != 3){ // 전달된 명령행 인수의 개수가 3이 아닌 경우
        fprintf(stderr, "사용법: %s 파일1 파일2\n", argv[0]);
        return 1; // 오류 코드 1을 반환하고 프로그램 종료
    }

    fp1 = fopen(argv[1], "r"); // 첫 번째 명령행 인수로 전달된 파일을 읽기 모드로 열기

    if(fp1 == NULL){ // 파일 열기에 실패한 경우
        fprintf(stderr, "파일 %s 열기 오류\n", argv[1]);
        return 2; // 오류 코드 2를 반환하고 프로그램 종료
    }

    fp2 = fopen(argv[2], "w"); // 두 번째 명령행 인수로 전달된 파일을 쓰기 모드로 열기

    while((c = fgetc(fp1)) != EOF) // 파일로부터 문자 하나를 읽어옴, 파일의 끝에 도달할 때까지 반복
        fputc(c, fp2); // 문자를 두 번째 파일에 씀

    fclose(fp1); // 첫 번째 파일을 닫음
    fclose(fp2); // 두 번째 파일을 닫음

    return 0; // 프로그램 종료
}
