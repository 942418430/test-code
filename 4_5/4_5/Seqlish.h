#pragma once

//��̬˳���
//typedef struct Seqlish{
//	int array[100];   //����100����������
//	int size;         //��¼���Ա������һ��Ԫ�غ��λ�ã���Ч���ݵĸ���
//} Seqlish;


typedef int SLDataType;  //����int�ض���   ������Ը��ӷ���ĸı���������


// ��̬˳���
typedef struct Seqlist {
	SLDataType *array;      //����ָ��ָ����Ͽռ䣬�����������
	int capactity;   // ����
	int size;        //��Ч���ݸ���
}   SeqList;

