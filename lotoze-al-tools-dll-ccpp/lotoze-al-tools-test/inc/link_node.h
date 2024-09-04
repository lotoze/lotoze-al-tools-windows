
#ifndef _LINK_NODE_H_
#define _LINK_NODE_H_

/*--------------------------------------------------------------------------*/
typedef struct  _SimpleDynamicLinkNode 
{
	void* data;
	struct _SimpleLinkNode* next;
} SimpleDynamicLinkNode;
/*--------------------------------------------------------------------------*/



/*--------------------------------------------------------------------------*/
typedef  SimpleDynamicLinkNode* SimpleDynamicLinkList;
/*--------------------------------------------------------------------------*/







#endif // _LINK_NODE_H_

