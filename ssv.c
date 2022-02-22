#include<stdio.h>
#include<stdlib.h>
#include"ssv.h"
//Arinc utku ayduran 260830748
// Asu simla ayduran 260822715
void parse(char record[],int *acct, float *amnt){
 char word1[10], word2[10];
sscanf(record, "%s %s", word1, word2);
*acct = atoi(word1);
*amnt =atof(word2);
}
