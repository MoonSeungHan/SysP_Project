#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time; 
    struct tm* time_info; 
    char time_buffer[80]; 
    
    current_time = time(NULL); 

    time_info = localtime(&current_time); 

    
    strftime(time_buffer, sizeof(time_buffer), "%a %b %e %H:%M:%S KST %Y", time_info);
    
    printf("%s\n", time_buffer);

    return 0;
}
