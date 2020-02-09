#include <iostream>
#include <string>
#include <fstream>

#include "WordAnalysis.h"

int main()
{
	std::string h;
	std::getline(std::cin, h);
		
	std::cout << "Query Loading...\n";

	wordanalysis test;
	test.runTest(h);

	std::cin.get();
}