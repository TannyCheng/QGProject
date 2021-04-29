#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "binary_sort_tree.h"

typedef enum Status 
{
    ERROR = 0, 
	SUCCESS = 1
} Status;


typedef  struct StackNode
{
	NodePtr data;
	struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef  struct  LinkStack
{
	LinkStackPtr top;
	int	count;
}LinkStack;



//��ջ
Status initLStack(LinkStack *s);//��ʼ��ջ
Status isEmptyLStack(LinkStack *s);//�ж�ջ�Ƿ�Ϊ��
Status getTopLStack(LinkStack *s,NodePtr *e);//�õ�ջ��Ԫ��
Status clearLStack(LinkStack *s);//���ջ
Status destroyLStack(LinkStack *s);//����ջ
Status LStackLength(LinkStack *s,int *length);//���ջ����
Status pushLStack(LinkStack *s,NodePtr e);//��ջ
Status popLStack(LinkStack *s,NodePtr *e);//��ջ


#endif 