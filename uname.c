#include <stdio.h>
#include <sys/utsname.h>

void print_system_info(struct utsname uname_data, char option) {
    switch(option) {
        case 'a':
            printf("커널: %s\n", uname_data.sysname);
            printf("네트워크 호스트: %s\n", uname_data.nodename);
            printf("커널 릴리스 버전: %s\n", uname_data.release);
            printf("커널 버전: %s\n", uname_data.version);
            printf("하드웨어 아키텍쳐: %s\n", uname_data.machine);
            break;
        case 's':
            printf("커널: %s\n", uname_data.sysname);
            break;
        case 'n':
            printf("네트워크 호스트: %s\n", uname_data.nodename);
            break;
        case 'r':
            printf("커널 릴리스 버전: %s\n", uname_data.release);
            break;
        case 'v':
            printf("커널 버전: %s\n", uname_data.version);
            break;
        case 'm':
            printf("하드웨어 아키텍쳐: %s\n", uname_data.machine);
            break;
        default:
            printf("똑바로 선택해주세요.\n");
            break;
    }
}

int main() {
    struct utsname uname_data;
    char option;

    // uname() 함수를 호출하여 시스템 정보를 얻음
    if (uname(&uname_data) != 0) {
        printf("실패했습니다!\n");
        return 1;
    }

    printf("해당되는 키를 눌러주세요! (a: 전체, s: 커널, n: 네트워크 호스트, r: 릴리스 버전, v: 커널 버전, m: 하드웨어 아키텍쳐): ");
    scanf("%c", &option);

    print_system_info(uname_data, option);

    return 0;
}
