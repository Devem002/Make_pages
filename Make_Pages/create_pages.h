//
// Created by devem on 8/22/22.
//

#ifndef MAKE_PAGES_CREATE_PAGES_H
#define MAKE_PAGES_CREATE_PAGES_H
#include <iostream>
#include <fstream>
#include <ctime>
#include <random>
#include <sstream>

class create_pages {
public:
    static int create_random_number();
    static int write_document(char* pages, int n);
};

#endif //MAKE_PAGES_CREATE_PAGES_H
