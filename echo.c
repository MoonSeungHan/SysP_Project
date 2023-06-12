#include <stdio.h>

int main(int argc, char *argv[]) {
    // argv[0]에는 프로그램의 실행 경로가 저장. argv[1]부터 인자 저장됨

    for (int i = 1; i < argc; i++) {
        printf("%s ", argv[i]);  // 인자를 출력하고 공백 문자를 추가하여 구분
    }
    printf("\n");  // 마지막에 개행 문자를 출력하여 줄을 바꿈

    return 0;
}
