#include "LibBook.h"
#include "EBook.h"

LibBook::LibBook() : LibItem()
{
    this->auther = "";
    this->n_pages = 0;
    std::cout << "constructor de LibBook \n";
}

LibBook::LibBook(string _auther, int _n_pages, string title, string ISBN) : LibItem(title,ISBN)
{
    this->auther = _auther;
    this->n_pages = _n_pages;
    std::cout << "constructor de LibBook \n";
}

string LibBook::getAuther() const
{
    return this->auther;
}

int LibBook::getNpages() const
{
	return this->n_pages;
}

void LibBook::download()
{
    /* an example of how download of file could be */
    EBook* e = new EBook(*this);
    e->writeOndisc();
    delete e;
}

string LibBook::toString()
{
    /* example of tostring of LibBook fun could be */
    return LibItem::toString() + " Auther: " + this->getAuther() + " N pages: " + std::to_string(this->getNpages()) + "\n";
}

LibBook::~LibBook()
{
    std::cout << "destructor de LibBook \n";
}
