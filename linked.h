#ifndef LINKED_LIST
#define LINKED_LIST


struct ACCOUNT{
	int accountNumber;
	float balance;
	struct ACCOUNT *next;
};
void findUpdate(int account , float amount );
void prettyPrint();
#endif
