#pragma once

#ifndef WORDANALYSIS_H
#define WORDANALYSIS_H

#define skipline std::cout << "\n"

#include <string>
#include <iostream>
#include <vector>

class wordanalysis
{
public:
	wordanalysis() {}
	~wordanalysis() {}

	std::vector<int> inspectLetters(std::string str);
	void sortLetters(std::vector<int> vec);
	void runTest(std::string s);
};

#endif