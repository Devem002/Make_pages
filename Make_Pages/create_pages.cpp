//
// Created by devem on 8/22/22.
//
#include "create_pages.h"
using namespace std;

int create_pages::create_random_number(){
    int res = rand()%1000;
    //cout << res<< endl;
    return res;
}

int create_pages::write_document(char* pages, int n) {
    //int p = atof(pages);
    stringstream ss;
    ofstream file;
    string intiger = ss.str();
    file.open(pages);
    for (int j = 0; j != n; j++) {
        srand(time(NULL));
        for (int i = 0; i != 256; i++) {
            int num = create_random_number();
            //string num = ss.str();
            //cout<< num<<endl;
            if (i != 255 || j != n-1) {
                file << num << ",";
            } else {
                file << num;
            }
        }
    }
    file.close();
    return 0;
}