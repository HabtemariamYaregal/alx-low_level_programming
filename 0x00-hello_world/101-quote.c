#include <unistd.h> 
#include <sys/syscall.h> 
/**
 *main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 *Return: return a value 1
*/
int main(void) 
{ 
    const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
    syscall(SYS_write, 0, msg, sizeof(msg)); 
    return 1; 
}
