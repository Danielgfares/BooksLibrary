#pragma once

#include <string>
#include <iostream>

using namespace std;

class LibItem
{
public:
	LibItem();
	LibItem(string _title, string _ISBN);
	
	string getTitle() const;
	string getISBN() const;
	
	virtual string toString();
	virtual void download() {};

	~LibItem();
private:
	string title;
	string ISBN;
};