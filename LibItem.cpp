#include "LibItem.h"

LibItem::LibItem()
{
    this->ISBN = "";
    this->title = "";
}

LibItem::LibItem(string _title, string _ISBN)
{
    this->ISBN = _ISBN;
    this->title = _title;
    std::cout << "constructor de LibItem\n";
}

string LibItem::toString() {
    return "Title: " + this->getTitle() + " ISBN: " + this->getISBN() +  "\n";
}

string LibItem::getTitle() const
{
    return this->title;
}

string LibItem::getISBN() const
{
    return this->ISBN;
}

LibItem::~LibItem()
{
    std::cout << "destructor de LibItem \n";
}
