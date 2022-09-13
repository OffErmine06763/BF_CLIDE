#include <iostream>
#include <string>
#include "compiler.h"

// hi mom code: +[----->+++<]>+.+.[--->+<]>---.+[----->+<]>.++.--.
int main() {
	std::string toLoad;
	std::cout << "Load file (Y/n)? ";
	std::cin >> toLoad;
	for (char& c : toLoad)
		c = std::tolower(c);

	Compiler compiler;
	if (toLoad == "y" || (toLoad) == "yes") {
		std::string filename;
		std::cout << "Main file name: ";
		std::cin >> filename;

		compiler.compileAndExecute(filename);
		return 0;
	}

	std::cout << "Write your code here:\n";
	std::string code;
	while (true) {
		std::cout << "$ ";
		std::getline(std::cin, code);

		compiler.execute(code);
		code = "";
	}
}