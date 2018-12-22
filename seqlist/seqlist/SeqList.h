#pragma once

#include <stdint.h>

typedef int	SDataType;


typedef struct SeqList {
	SDataType	*array;		// ָ����ϵĿռ�
	int size;		// ��ʾ��ǰ˳������ж��ٸ���
	// ˳��Ҳ��ʾ�˼���������±�
	int	capacity;	// ����
}	SeqList;

// ��ʼ��/����
// ��ʼ��
// seqlist ��һ�������ĵ�ַ
// capacity ��ʾ˳���ĳ�ʼ����
void SeqListInit(SeqList *seqlist, int capacity);

void SeqListDestroy(SeqList *seqlist);

// ��ɾ�Ĳ�

// ����
// β��
void SeqListPushBack(SeqList *seqlist, SDataType value);

// ͷ��
void SeqListPushFront(SeqList *seqlist, SDataType value);

// �м���룬�� pos ���ڵ��±���� value
void SeqListInsert(SeqList *seqlist, int pos, SDataType value);

// ɾ��
// βɾ
void SeqListPopBack(SeqList *seqlist);

// ͷɾ
void SeqListPopFront(SeqList *seqlist);

// ɾ�� pos ���ڵ��±������
void SeqListErase(SeqList *seqlist, int pos);

// ��ӡ
void SeqListPrint(const SeqList *seqlist);

// �޸� pos �����±������Ϊ value
void SeqListModify(SeqList *seqlist, int pos, SDataType value);

// ����
// ����ҵ������ص�һ���ҵ����±�
// ���û�ҵ������� -1
int SeqListFind(const SeqList *seqlist, SDataType value);

// �ҵ���ɾ����һ�������� value
void SeqListRemove(SeqList *seqlist, SDataType value);

// �ж�˳����Ƿ�Ϊ��
int SeqListEmpty(const SeqList *seqlist);

// �������ݸ���
int SeqListSize(const SeqList *seqlist);