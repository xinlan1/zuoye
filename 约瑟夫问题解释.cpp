//#include <iostream> 
//using namespace std;
//
//struct Node {
//	int num;
//	Node* ahead;
//	Node* next;
//};
//
//Node* Create(int N) {   //��������N���ڵ��˫��ѭ������
//	int n = 1;
//	Node* node = new Node;
//	node->num = n;
//	Node* head = node;      //ָ���һ���ڵ�
//	Node* tail = head;      //ָ�����һ���ڵ�
//
//	while (n++ < N) {
//		node = new Node;   //���½ڵ�
//		node->num = n;     //��ֵ
//		tail->next = node; //�����½ڵ�
//		node->ahead = tail;
//		tail = tail->next; //β�ͺ���
//	}
//
//	tail->next = head;    //β�ʹ���
//	head->ahead = tail;
//	return head;
//
//}
//
//Node* Search(Node* head, int P) {   //��Head��ʼѰ�ҵ�P���ڵ�
//	while (head->num != P) {
//		head = head->next;
//	}
//	return head;
//}
//
//Node* Release(Node* head, int M) {   //�ͷ�Head��ʼ�ĵ�N���ڵ�
//	int count = 1;
//	Node* temp = head;
//	while (count < M) { //Ѱ�ҵ�M���ڵ�
//		temp = temp->next;
//		count++;
//	}
//	temp->ahead->next = temp->next;     //�Ƴ���M���ڵ�
//	temp->next->ahead = temp->ahead;    //�Ƴ���M���ڵ�
//	cout << temp->num << ",";
//	head = temp->next;     //�ͷŵ�M���ڵ���ռ�ڴ�ռ�
//	delete temp;
//	return head;
//}
//
//int main() {
//	//Լɪ������
//	int N, P, M = 0;				//N-��ʼ�ڵ�����P-��ʼ�ڵ�
//	cin >> N >> P >> M;				//ÿ���ͷŵ�N���ڵ�
//	Node* head = Create(N);			//����M���ڵ�Ļ�
//	head = Search(head, P);			//�ҵ���P���ڵ�
//	while (head->next != head) {	    //�����ͷŵ�M��Ԫ�أ�ֱ��ֻʣһ��Ԫ��
//		head = Release(head, M);    //�ͷŵ�M���ڵ�
//	}
//	cout << head->num;
//	return 0;
//}
