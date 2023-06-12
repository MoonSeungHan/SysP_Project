#include <utime.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {  // 명령행 인자로 파일 이름을 입력받아야 함
        fprintf(stderr, "사용법: touch file1 \n");
        exit(-1);
    }
    
    utime(argv[1], NULL);  // 파일의 접근 및 수정 시간을 현재 시간으로 변경
    
    return 0;
}
