#include <stdio.h>
#include <dirent.h>

int main() {
    struct dirent* entry;
    DIR* dir;

    // 디렉토리 열기
    dir = opendir(".");
    if (dir == NULL) {
        printf("열 수 없습니다.\n");
        return 1;
    }

    // 내용 읽기
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    closedir(dir); // 닫기

    return 0;
}