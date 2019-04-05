#include<stdio.h>
#include<stdlib.h>

/*
// 静态顺序表（顺序表大小是固定的（编译期间决定的（写死在代码里的
typedef struct SeqList {
int array[100];	// 容量是 100
int size;		// 顺序里有效数据个数
// 同时也表示从后数下一个可用位置的下标
}	SeqList;

*/

typedef int SLDataType;

// 动态顺序表（在程序运行期间可以动态控制容量的大小
typedef struct SeqList {
	SLDataType *array;		// 指向 堆上空间，存放数据
	int capacity;	// 容量
	int size;		// 有效个数
}	SeqList;


//构建顺序表
void SeqlistInit(SeqList *pSeqList)
{
	assert(pSeqList != NULL);

	// 开辟空间
	// 设置容量 和 size
	pSeqList->capacity = 5;
	pSeqList->array = (SLDataType *)malloc(sizeof(SLDataType)* pSeqList->capacity);
	pSeqList->size = 0;
}

//销毁顺序表
void SeqlistDestroy(SeqList *pSeqlist)
{
	assert(pSeqlist);
	assert(pSeqlist->array);
	free(pSeqlist->array);
	pSeqlist->array = NULL;
	pSeqlist->capacity = 0;
	pSeqlist->size = 0;
}

// 尾插
void SeqListPushBack(SeqList *pSeqList, SLDataType value) {
	pSeqList->array[pSeqList->size] = value;
	pSeqList->size++;
}


//头插
void SeqListPushFront(SeqList *pSeqList, SLDataType value) {
	// i 是空间的下标
	for (int i = pSeqList->size; i >= 1; i--) {
		pSeqList->array[i] = pSeqList->array[i - 1];
	}

	pSeqList->array[0] = value;
	pSeqList->size++;
}


int main() {
	SeqList	seqlist;

	SeqListInit(&seqlist);
}