#include <iostream>

int main(int argc, char **argv)
{
	int a = argc + 2;
	FILE *f = fopen("asad", "ab");
	std::cout << "Meu software ta fofinho!" << std::endl;
	return 1;
}
