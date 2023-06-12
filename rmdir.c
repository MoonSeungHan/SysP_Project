#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {  // 명령행 인자로 디렉터리 이름을 입력받아야 함
        printf("Usage: %s <directory_name>\n", argv[0]); // ./디렉토리 이름 형식으로 받음
        return 1;
    }

    if (rmdir(argv[1]) == -1) {  // rmdir() 함수를 이용해 삭제
        printf("실패했습니다!\n");
        return 1;
    }

    printf("삭제했습니다!\n");
    return 0;
}
