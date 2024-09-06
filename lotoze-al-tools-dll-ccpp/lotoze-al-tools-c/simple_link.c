

#include "pch.h"
#include "link_node.h"
#include "core.h"
#include "simple_link.h"
#include <stdlib.h>


/**
 * 初始化链表
 * 
 * \param L
 * \return 
 */
LOTOZEALTOOLSCORE_API status initLinkList(SimpleDynamicLinkList* L) {

	*L = (SimpleDynamicLinkList)malloc(sizeof(SimpleDynamicLinkNode));

	if (!(*L)) {
	
		return ERROR;
	}

	(*L)->next = NULL;

	return OK;
}



/**
 * 判断链表是否为空
 * 
 * \param L
 * \return 
 */
LOTOZEALTOOLSCORE_API status linkListIsEmpty(SimpleDynamicLinkList L) {
	if (L->next) {
		return FALSE;
	}else {
		return TRUE;
	}

}


/**
 * 清空链表.
 * 
 * 1. SimpleDynamicLinkList是结构体SimpleDynamicLinkNode的指针变量，新建一个结构体SimpleDynamicLinkList p，存储头节点
 * 2. 如果p->next != NULL不满足一直循环到尾结点
 * 3. 循环中使用临时变量存储p->next，为了找到下个后继节点
 * 4. free掉p节点
 * 5. 将头节点置为NULL
 * 
 * \param L
 * \return 
 */
LOTOZEALTOOLSCORE_API status clearLinkList(SimpleDynamicLinkList* L) {

	SimpleDynamicLinkList p, temp;
	p = (*L)->next;
	while (p) {
		temp = p->next;
		free(p);
		p = temp;
	}

	(*L)->next = NULL;

	return OK;

}


/**
 * 获取链表长度.
 * 1. 创建长度变量len
 * 2. 循环头节点以后得next，每次循环len+1
 * \param L
 * \return 
 */
LOTOZEALTOOLSCORE_API long linkListLength(SimpleDynamicLinkList L) {

	long len = 0;

	SimpleDynamicLinkList p = L->next;

	while (p) {
		
		len++;
		p = p->next;
	}

	return len;

}


/**
 * 获取指定的节点数据.
 * 
 * 1. 老方式，还是使用临时变量p存储头结点的后继节点
 * 2. 循环，让j<i，则p正是第i个（从0开始）链表节点
 * 3. 鲁棒性处理
 * 4. 赋值给e
 * 5. 返回操作状态
 * 
 * \param L
 * \param i
 * \param e
 * \return 
 */
LOTOZEALTOOLSCORE_API status getElem(SimpleDynamicLinkList L, int i, void* e) {
	SimpleDynamicLinkList p = L->next;

	int j;

	while (p && j < i){
		p = p->next;
		++j;
	}

	if (!p && j > i) {
		return ERROR;
	}

	e = p->data;

	return OK;
}
/**
 * 获取e在链表中的位序.
 * 1. 老方式，还是使用临时变量p存储头结点的后继节点
 * 2. 循环，每次循环判断p->data是否和e相等（这里有个疑问void*指针如何判断是否相等==?  => 需要使用比较函数，按实际类型判断值，不能判断地址）
 * \param L
 * \param e
 * \return 
 */
LOTOZEALTOOLSCORE_API int locateElem(SimpleDynamicLinkList L, int voidType,  void* e) {

	SimpleDynamicLinkList p = L->next;
	int i = 0;
	while (p) {
		p = p->next;
		if (voidCompare(voidType, p->data, e) == 1) {
			return i;
		}
		++i;
	}

	return FALSE;

}



