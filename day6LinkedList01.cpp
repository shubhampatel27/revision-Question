// brute force approach
int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
	while(firstHead){
		Node *temp = secondHead;
		while(temp){
			if(temp==firstHead) return firstHead->data;
			temp= temp->next;
		}
		firstHead = firstHead->next;
	}
	return -1;
}
