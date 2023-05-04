#include <unistd.h>

int main()
{
	char mensagem[] = "Hello, world!";   
	size_t tamanho = sizeof(mensagem);

    	write(STDOUT_FILENO, mensagem, tamanho);
	
	return (0);	
}
