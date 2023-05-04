#include <stdio.h>
#include <unistd.h>
#include <math.h>

void equacao_segundo_grau(int argc, char *argv[]);

int main(void)
{
	equacao_segundo_grau("2 3 1");
	return (0);
}

void equacao_segundo_grau(int argc, char *argv[])
{
	char mensagem_erro_delta[] = "Valor de delta menor que 0, não é possível calcular as raízes da equação";
	size_t tamanho = sizeof(mensagem_erro_delta);
	float delta;
	float x1;
	float x2;
	float a = atoi(argv[0]);
        float b = atoi(argv[1]);
        float c = atoi(argv[2]);

	delta  = (b**2.0) - (4.0*a*c);

	if (delta < 0)
	{
		write(STDOUT_FILENO, mensagem_erro_delta, tamanho);
	}
	else {
		x1 = (-b + sqrt(delta)) / (2.0 * a);
		x2 = (-b - sqrt(delta)) / (2.0 * a);

		printf("Os valores das raízes são(%.2f, %.2f)\n", x1, x2);	
	}
}
