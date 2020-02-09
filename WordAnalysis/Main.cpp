#include <iostream>
#include <string>
#include <fstream>

#include "WordAnalysis.h"

int main()
{
	std::string h;
	std::getline(std::cin, h);

	wordanalysis test;
	test.runTest(h);

	std::cin.get();
}