#include "EBook.h"

EBook::EBook() : LibFile()
{
	std::cout << "constructor de EBook \n";
}

EBook::EBook(const LibBook& book) : LibFile()
{
	std::cout << "constructor de EBook \n";
	std::cout << "magically requesting ebook from library servers to download the file \n";
}

void EBook::writeOndisc()
{
	std::cout << "downloading ebook on disc \n";
}

string EBook::toString()
{
	return string();
}

EBook::~EBook()
{
	std::cout << "destructor de EBook \n";
}
