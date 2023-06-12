#include <stdio.h>
#include <unistd.h>

int main() 
{
    char cwd[1024]; // 현재 작업 디렉토리 경로를 저장할 배열

    if (getcwd(cwd, sizeof(cwd)) != NULL) 
    {
        printf("%s\n", cwd);
    } 
    else 
    {
        perror("error!"); // getcwd() 함수가 실패하면 오류 메시지 출력
        return 1;
    }

    return 0;
}
