#pragma once

#include <string>
#include <iostream>

using namespace std;

class LibFile
{
public:
	LibFile();
	virtual string toString() = 0;
	virtual void writeOndisc() = 0;
	~LibFile();
};

