
#include<iostream>


extern "C" {
#include "core.h"
#include "link_node.h"
#include "simple_link.h"
}




using namespace std;

int main() {


	

	SimpleDynamicLinkList L;
	
	int s = initList(&L);

	cout << s << endl;

	return 0;
}
