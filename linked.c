#include<stdio.h>
#include"linked.h"
#include<stdlib.h>
//Arınç Utku Ayduran 260830748
//Asu Simla Ayduran 260822715 
struct ACCOUNT *head = NULL;
void findUpdate( int account , float amount){
	int existAcc = 0;
	struct ACCOUNT *temp = head;
	if (head==NULL){
		head = (struct ACCOUNT*)malloc(sizeof(struct ACCOUNT));
		head->accountNumber = account;
		head->balance = amount;
	}
	else{
		while(temp->next!= NULL){
			if(temp->accountNumber == account)
			{
				temp->balance=temp->balance+amount;
				existAcc = 1;
				break;
			}
		temp=temp->next;
	}
	if(existAcc == 0){
		struct ACCOUNT *new = (struct ACCOUNT*)malloc(sizeof(struct ACCOUNT));
				new->accountNumber = account;
				new->balance = amount;
				temp->next =new;
			}
	}
}
void prettyPrint(){
struct ACCOUNT *temp=head;
while(temp !=NULL){
printf("ACCOUNT ID: %5d BALANCE:$%6.2f\n",temp->accountNumber,temp->balance);
temp = temp->next;
 } 
}

