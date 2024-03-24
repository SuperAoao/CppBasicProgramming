#include <iostream>
#include <list>

struct singleList
{
	int val;
	singleList* next;
};

struct singleListHead
{
	singleList* head;
};

bool isEmpty(struct singleListHead* head)
{
	if (head)
	{
		return head->head == nullptr;
	}
	else
	{
		return nullptr;
	}
}

void dump(struct singleListHead* head)
{
	if (!head)
	{
		return;
	}
	singleList* tmp = head->head;
	int idx = 0;
	while (tmp)
	{
		printf("[%02d]: %08d\n", idx++, tmp->val);
		tmp = tmp->next;
	}
}

void insert(singleList** prev, singleList* elem)
{
	if (!prev)
	{
		return;
	}
	elem->next = *prev;
	*prev = elem;	//	ע��singleList** prev������Ϣ, ����ʵ��ǰ���ڵ��nextָ��
}

void insertHead(singleListHead* head, singleList* elem)
{
	if (head)
	{
		insert(&head->head, elem);
	}
}

singleList* del(singleList** prev)
{
	if (!prev)
	{
		return nullptr;
	}

	singleList* toBeDeleted = (*prev);
	if (toBeDeleted)
	{
		*prev = toBeDeleted->next;
		toBeDeleted->next = nullptr;
	}
	else
	{
		return nullptr;
	}
}

singleList* deleteHead(singleListHead* head)
{
	if (head)
	{
		return del(&head->head);
	}
	else
	{
		return nullptr;
	}
}

int main()
{
	std::list<int> list = { 1,2,3 };


	return 0;
}