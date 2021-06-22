#pragma once

#include "LibFile.h"
#include "LibBook.h"

class EBook :
    public LibFile
{
public:
    EBook();
    EBook(const LibBook& book);
    void writeOndisc();
    string toString();
    ~EBook();
};

