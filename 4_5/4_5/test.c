#include<stdio.h>
#include<stdlib.h>

/*
// ��̬˳���˳����С�ǹ̶��ģ������ڼ�����ģ�д���ڴ������
typedef struct SeqList {
int array[100];	// ������ 100
int size;		// ˳������Ч���ݸ���
// ͬʱҲ��ʾ�Ӻ�����һ������λ�õ��±�
}	SeqList;

*/

typedef int SLDataType;

// ��̬˳����ڳ��������ڼ���Զ�̬���������Ĵ�С
typedef struct SeqList {
	SLDataType *array;		// ָ�� ���Ͽռ䣬�������
	int capacity;	// ����
	int size;		// ��Ч����
}	SeqList;


//����˳���
void SeqlistInit(SeqList *pSeqList)
{
	assert(pSeqList != NULL);

	// ���ٿռ�
	// �������� �� size
	pSeqList->capacity = 5;
	pSeqList->array = (SLDataType *)malloc(sizeof(SLDataType)* pSeqList->capacity);
	pSeqList->size = 0;
}

//����˳���
void SeqlistDestroy(SeqList *pSeqlist)
{
	assert(pSeqlist);
	assert(pSeqlist->array);
	free(pSeqlist->array);
	pSeqlist->array = NULL;
	pSeqlist->capacity = 0;
	pSeqlist->size = 0;
}

// β��
void SeqListPushBack(SeqList *pSeqList, SLDataType value) {
	pSeqList->array[pSeqList->size] = value;
	pSeqList->size++;
}


//ͷ��
void SeqListPushFront(SeqList *pSeqList, SLDataType value) {
	// i �ǿռ���±�
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