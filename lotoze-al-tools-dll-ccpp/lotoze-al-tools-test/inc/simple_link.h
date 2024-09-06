
#ifndef _LINK_H_
#define _LINK_H_

#include "core.h"
#include "link_node.h"




/**
 * ��ʼ������
 * 
 */
LOTOZEALTOOLSCORE_API status initList(SimpleDynamicLinkList* L);

/**
 * �ж��б��Ƿ�Ϊ��
 */
LOTOZEALTOOLSCORE_API status listIsEmpty(SimpleDynamicLinkList L);
LOTOZEALTOOLSCORE_API status clearList(SimpleDynamicLinkList* L);
LOTOZEALTOOLSCORE_API long listLength(SimpleDynamicLinkList L);
LOTOZEALTOOLSCORE_API status getElem(SimpleDynamicLinkList L, int i, void* e);
LOTOZEALTOOLSCORE_API int locateElem(SimpleDynamicLinkList L, void* e);
LOTOZEALTOOLSCORE_API void createListHead(SimpleDynamicLinkList* L, int n); //ͷ�巨
LOTOZEALTOOLSCORE_API void createListTail(SimpleDynamicLinkList* L, int n); //β�巨 
LOTOZEALTOOLSCORE_API status listInsert(SimpleDynamicLinkList* L, int i, void* e);
LOTOZEALTOOLSCORE_API status listDelete(SimpleDynamicLinkList* L, int i, void* e);
LOTOZEALTOOLSCORE_API status listTraverse(SimpleDynamicLinkList L);






#endif // _LINK_H_

