#include <stdio.h>

void clearScreen() {
    printf("\033[2J");  // ANSI 이스케이프 시퀀스를 사용하여 화면을 지움
    printf("\033[1;1H");  // 커서를 화면의 첫 번째 줄, 첫 번째 열로 이동.
}

int main() {
    clearScreen();  // clearScreen() 함수를 호출하여 화면을 지우고 초기화.
    return 0;
}
