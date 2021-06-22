#pragma once

#include "LibItem.h"

class LibBook :
    public LibItem
{
public:
    LibBook();
    LibBook(string _auther, int _n_pages, string title, string ISBN);

    string getAuther() const;
    int getNpages() const;

    void download();
    string toString();
    
    ~LibBook();
private:
    string auther;
    int n_pages = 0;
};

