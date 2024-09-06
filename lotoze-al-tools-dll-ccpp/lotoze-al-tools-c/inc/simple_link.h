
#ifndef _SIMPLE_LINK_H_
#define _SIMPLE_LINK_H_

#include "core.h"
#include "link_node.h"




/**
 * 初始化链表
 * 
 */
LOTOZEALTOOLSCORE_API status initLinkList(SimpleDynamicLinkList* L);

/**
 * 判断链表是否为空
 */
LOTOZEALTOOLSCORE_API status linkListIsEmpty(SimpleDynamicLinkList L);
/**
 * 清空链表.
 */
LOTOZEALTOOLSCORE_API status clearLinkList(SimpleDynamicLinkList* L);
/**
 * 获取链表长度.
 */
LOTOZEALTOOLSCORE_API long linkListLength(SimpleDynamicLinkList L);

/**
 * 获取指定的节点数据.
 */
LOTOZEALTOOLSCORE_API status getElem(SimpleDynamicLinkList L, int i, void* e);
/**
 * 获取e在链表中的位序.
 */
LOTOZEALTOOLSCORE_API int locateElem(SimpleDynamicLinkList L, int voidType, void* e);


LOTOZEALTOOLSCORE_API void createLinkListByHead(SimpleDynamicLinkList* L, int n); //头插法
LOTOZEALTOOLSCORE_API void createLinkListByTail(SimpleDynamicLinkList* L, int n); //尾插法 
LOTOZEALTOOLSCORE_API status linkListInsert(SimpleDynamicLinkList* L, int i, void* e);
LOTOZEALTOOLSCORE_API status linkListDelete(SimpleDynamicLinkList* L, int i, void* e);
LOTOZEALTOOLSCORE_API status linkListTraverse(SimpleDynamicLinkList L);






#endif // _SIMPLE_LINK_H_

