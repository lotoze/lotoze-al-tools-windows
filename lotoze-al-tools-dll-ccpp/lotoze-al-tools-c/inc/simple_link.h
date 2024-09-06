
#ifndef _SIMPLE_LINK_H_
#define _SIMPLE_LINK_H_

#include "core.h"
#include "link_node.h"




/**
 * ��ʼ������
 * 
 */
LOTOZEALTOOLSCORE_API status initLinkList(SimpleDynamicLinkList* L);

/**
 * �ж������Ƿ�Ϊ��
 */
LOTOZEALTOOLSCORE_API status linkListIsEmpty(SimpleDynamicLinkList L);
/**
 * �������.
 */
LOTOZEALTOOLSCORE_API status clearLinkList(SimpleDynamicLinkList* L);
/**
 * ��ȡ������.
 */
LOTOZEALTOOLSCORE_API long linkListLength(SimpleDynamicLinkList L);

/**
 * ��ȡָ���Ľڵ�����.
 */
LOTOZEALTOOLSCORE_API status getElem(SimpleDynamicLinkList L, int i, void* e);
/**
 * ��ȡe�������е�λ��.
 */
LOTOZEALTOOLSCORE_API int locateElem(SimpleDynamicLinkList L, int voidType, void* e);


LOTOZEALTOOLSCORE_API void createLinkListByHead(SimpleDynamicLinkList* L, int n); //ͷ�巨
LOTOZEALTOOLSCORE_API void createLinkListByTail(SimpleDynamicLinkList* L, int n); //β�巨 
LOTOZEALTOOLSCORE_API status linkListInsert(SimpleDynamicLinkList* L, int i, void* e);
LOTOZEALTOOLSCORE_API status linkListDelete(SimpleDynamicLinkList* L, int i, void* e);
LOTOZEALTOOLSCORE_API status linkListTraverse(SimpleDynamicLinkList L);






#endif // _SIMPLE_LINK_H_

