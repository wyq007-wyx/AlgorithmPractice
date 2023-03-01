//#include<iostream>
//#include<string>
//#include<algorithm>
//#pragma warninng(disable:4996)
//using namespace std;
//class ListNode {
//public:
//	int val;
//	ListNode *next;
//	ListNode *pre;
//	ListNode() :val(0), next(NULL), pre(NULL) {}
//	ListNode(int x):val(x),next(NULL),pre(NULL){}
//};
//void insertNode(ListNode *head,int val) {
//	ListNode *p = head;
//	if (p == NULL) return;
//	while (p->next != NULL) {
//		p = p->next;
//	}
//	ListNode *node = new ListNode(val);
//	node->pre = p;
//	p->next = node;
//}
//ListNode* reverList(ListNode *Head) {
//	ListNode *p = Head;
//	if (Head == NULL) return NULL;
//	ListNode *q = p->next;
//	ListNode *newHead = new ListNode();
//	while (p != NULL) {
//		if(newHead->next!=NULL) newHead->next->pre = p;
//		p->next = newHead->next;
//		newHead->next = p;
//		p->pre = newHead;
//		p = q;
//		if (q != NULL) q = q->next;
//	}
//	newHead = newHead->next;
//	newHead->pre = NULL;
//	return newHead;
//}
////int main() {
////	ListNode *Head = new ListNode(1);
////	for (int i = 2; i <= 5; i++) {
////		insertNode(Head, i);
////	}
////	ListNode *p = Head;
////	while (p != NULL) {
////		cout << p->val << " ";
////		p = p->next;
////	}
////	Head = reverList(Head);
////	if (Head != NULL) {
////		p = Head;
////		while (p->next!= NULL) {
////			//cout << p->val << " ";
////			p = p->next;
////		}
////		while (p != NULL) {
////			cout << p->val << " ";
////			p = p->pre;
////		}
////	}
////	return 0;
////}