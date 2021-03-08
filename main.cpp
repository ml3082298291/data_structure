//
// Created by ml123 on 2021/3/8.
//

#include "seqlist.h"
#include "iostream"
#include "string"

using namespace std;

int main(void) {
    sqlist l;
    InitList_Sq(l);
    for(int i = 0; i < 10; ++i)
    {
        ListInsert_Sq(l, i, i);
    }
    List_print_Sq(l);
    cout<<"helloworld"<<endl;
    return 0;
}
