

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
LOTOZEALTOOLSCORE_API status initList(SimpleDynamicLinkList* L) {

	*L = (SimpleDynamicLinkList)malloc(sizeof(SimpleDynamicLinkNode));

	if (!(*L)) {
	
		return ERROR;
	}

	(*L)->next = NULL;

	return OK;
}



/**
 * �ж��б��Ƿ�Ϊ��
 * 
 * \param L
 * \return 
 */
LOTOZEALTOOLSCORE_API status listIsEmpty(SimpleDynamicLinkList L) {
	if (L->next) {
		return FALSE;
	}else {
		return TRUE;
	}

}
