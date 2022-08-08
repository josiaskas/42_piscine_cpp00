#include <iostream>

int main(int argc, char *argv[])
{
	char loud[] = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	int	i = 1;
	if (argc > 1){
		do {
			for (int j = 0; argv[i][j] != 0; j++){
				std::cout << (char)std::toupper(argv[i][j]);
			}
			i++;
		} while (i < argc);
		std::cout << std::endl;
	}else{
		std::cout << loud << std::endl;
	}
}