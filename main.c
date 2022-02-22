#include<stdio.h>
#include"ssv.h"
#include"linked.h"
//Arınç Utku Ayduran 260830748 
//Asu Simla Ayduran 260822715 
int  main(){
    FILE *ptr;
    char record[100];
    int acctNum;
    float amount;
    ptr= fopen("mini6tester.ssv", "r");
    if(ptr == NULL){
	    printf("File cannot be opened \n");
	    return 1;
    }
    while(!feof(ptr)){
	    fgets(record, 99, ptr);
	    parse(record, &acctNum, &amount);
	    findUpdate(acctNum, amount);
    }
    fclose(ptr);
    prettyPrint();
    return 0;
}
