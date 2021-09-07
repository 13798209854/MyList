#ifndef LISTCOMMON_H
#define LISTCOMMON_H

#include <iostream>
#include <set>
#include <vector>
#include <unordered_set>

using namespace std;

struct ListNode { 
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}

};
//��һ���ڵ���ͷ�ڵ�
ListNode* inputList(std::vector<int> v);
void printLinkList(ListNode* head);
//αͷ�ڵ�
ListNode* inputListV(std::vector<int> v);
void printLinkListV(ListNode* vhead);



#endif