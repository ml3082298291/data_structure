//
// Created by ml123 on 2021/3/8.
//
#include "seqlist.h"
#include <cstdlib>
#include <iostream>

using namespace std;
Status InitList_Sq(sqlist &L) {
    // 构造一个空的线性表
    L.elem = (ElemType* ) malloc(sizeof(ElemType) * LIST_INIT_SIZE);
    if(L.elem == nullptr) {
        return OVERFLOW;
    }
    L.length = LIST_INIT_SIZE;
    L.length = 0;
    return OK;
}

// 在线性表第i个位置之前插入元素e
Status ListInsert_Sq(sqlist &L, int i, ElemType e){
    if(i < 1 || i > L.length + 1) return ERROR;     // i值不合法
    if(L.listsize <= L.length){
        ElemType* newbase;
         newbase = (ElemType *)realloc(L.elem, (L.listsize + LISTINCREAMENT) * sizeof(ElemType));
        L.elem = newbase;
        L.listsize += LISTINCREAMENT;
    }
    ElemType* q = &L.elem[i - 1];
    ElemType* p = &L.elem[L.listsize - 1];
    
    for(; p >= q; p--)
    {
        *(p+1) = *p;
    }
    *q = e;
    L.listsize ++;
    return OK;
}
// 删除线性表第i个位置的元素e，并用e返回其值
ElemType ListDelete_Sq(sqlist &L, int i, ElemType &e)
{
    if(i < 1 || i > L.listsize) return ERROR;
    ElemType* q = &L.elem[i];
    ElemType* p = &L.elem[L.listsize - 1];
    for(; q < p; ++q)
        *q = *(q +1);
    L.listsize --;
    return e;
}
// 在顺序表l中查重第一个和e相同的的元素的位置
int LocateElem_Sq(sqlist L, ElemType e, int loc){
    
    for(loc = 1; loc > L.listsize || L.elem[loc - 1] == e; ++loc);
    if(loc > L.listsize) {return ERROR;}
    else
    return loc;
}

// 输出list
Status List_print_Sq(sqlist L){
    if(L.listsize == 0) return ERROR;
    for(int i = 0; i < L.listsize - 1; ++i){
        cout<<L.elem[i]<<" ";
    }
    cout<<endl;
    return OK;
}