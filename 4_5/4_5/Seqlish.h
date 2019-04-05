#pragma once

//静态顺序表
//typedef struct Seqlish{
//	int array[100];   //容量100的整形数组
//	int size;         //记录线性表中最后一个元素后的位置，有效数据的个数
//} Seqlish;


typedef int SLDataType;  //类型int重定义   这里可以更加方便的改变数据类型


// 动态顺序表
typedef struct Seqlist {
	SLDataType *array;      //定义指针指向堆上空间，用来存放数据
	int capactity;   // 容量
	int size;        //有效数据个数
}   SeqList;

