#include <iostream>
#include "create_pages.h"
using namespace std;


int main(int argc, char* argv[]) {
    char* a = argv[1];
    char* c = argv[2];
    if (atoi(c) == 1){
        //cout<< "fulvo"<<endl;
    }
    else{
        //cout<< "No";
    }
    create_pages Cpage = *new create_pages;
    Cpage.write_document(a, atoi(c));
    return 0;
}
