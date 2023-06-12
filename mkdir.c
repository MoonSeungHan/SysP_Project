#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {  // 명령행 인자로 디렉터리 이름을 입력받아야 함
        printf("Usage: %s <directory_name>\n", argv[0]);ㄴ
        return 1;
    }

    if (mkdir(argv[1], 0777) == -1) {  // mkdir()함수로 생성, 0777은 모든 사용자에게 읽기, 쓰기, 실행 권한을 부여한다.
        printf("실패했습니다!\n");
        return 1;
    }

    printf("성공적으로 만들었습니다!\n");
    return 0;
}
