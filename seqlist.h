//
// Created by ml123 on 2021/3/8.
//
// 线性表的顺序表示和实现
#ifndef DATA_STRUCT_SEQLIST_H
#define DATA_STRUCT_SEQLIST_H

/*
 * 线性表的动态分配顺序存储结构
*/

#define LIST_INIT_SIZE          100     //  线性表存储空间的初始化分配量
#define LISTINCREAMENT          10      //  线性表存储空间的分配量
#define OK                      0
#define ERROR                   1
#define OVERFLOW                -1
typedef int                     ElemType;
typedef int                     Status;
typedef struct {
    ElemType *elem;                     // 存储空间基址
    int length;                         // 当前长度
    int listsize;                       // 当前分配内存容量（以sizeof（elemtype）为单位）
}sqlist;
// 初始化
Status InitList_Sq(sqlist &L);
// 在线性表第i个位置之前插入元素e
Status ListInsert_Sq(sqlist &L, int i, ElemType e);
// 删除线性表第i个位置的元素e，并用e返回其值
ElemType ListDelete_Sq(sqlist &L, int i, ElemType &e);
// 在顺序表l中查重第一个和e相同的的元素的位置
int LocateElem_Sq(sqlist L, ElemType e, int loc);
// 输出list
Status List_print_Sq(sqlist L);






#endif //DATA_STRUCT_SEQLIST_H
