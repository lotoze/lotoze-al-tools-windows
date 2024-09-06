

#include "pch.h"
#include "link_node.h"
#include "core.h"
#include "simple_link.h"
#include <stdlib.h>


/**
 * ��ʼ������
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
 * �ж������Ƿ�Ϊ��
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
 * �������.
 * 
 * 1. SimpleDynamicLinkList�ǽṹ��SimpleDynamicLinkNode��ָ��������½�һ���ṹ��SimpleDynamicLinkList p���洢ͷ�ڵ�
 * 2. ���p->next != NULL������һֱѭ����β���
 * 3. ѭ����ʹ����ʱ�����洢p->next��Ϊ���ҵ��¸���̽ڵ�
 * 4. free��p�ڵ�
 * 5. ��ͷ�ڵ���ΪNULL
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
 * ��ȡ������.
 * 1. �������ȱ���len
 * 2. ѭ��ͷ�ڵ��Ժ��next��ÿ��ѭ��len+1
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
 * ��ȡָ���Ľڵ�����.
 * 
 * 1. �Ϸ�ʽ������ʹ����ʱ����p�洢ͷ���ĺ�̽ڵ�
 * 2. ѭ������j<i����p���ǵ�i������0��ʼ������ڵ�
 * 3. ³���Դ���
 * 4. ��ֵ��e
 * 5. ���ز���״̬
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
 * ��ȡe�������е�λ��.
 * 1. �Ϸ�ʽ������ʹ����ʱ����p�洢ͷ���ĺ�̽ڵ�
 * 2. ѭ����ÿ��ѭ���ж�p->data�Ƿ��e��ȣ������и�����void*ָ������ж��Ƿ����==?  => ��Ҫʹ�ñȽϺ�������ʵ�������ж�ֵ�������жϵ�ַ��
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



