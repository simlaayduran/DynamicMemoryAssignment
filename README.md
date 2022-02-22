# DynamicMemoryAssignment
" Assume we have an SSV file called students.ssv. An SSV file is different from a CSV file because each field is delimited by the space character instead of the comma. A limitation of SSV files is that each field can only be a single word or number. The advantage of an SSV file is that it can be easily parsed using default C functions.

For example:

Assume we have the line: “bob mary 10” in a file.

Assume arrays: char line[100], word1[10], word2[10], word3[10]

Then I can write the following code:

fgets(line, 99, file_ptr);

sscanf(line, “%s %s %d”, word1, word2, word3); int n = atoi(word3);

The structure of the SSV file is fixed and is represented as follows: ACCOUNT_NO AMOUNT

Where ACCOUNT_NO is an integer and AMOUNT is a float. For example: 

10 100.0 20 -50.5 10 -20.0 /n
The above file states that there are two accounts, account number 10 and 20. According to the file account 10 was deposited $100.00 and then withdrawn $20.00, and account 20 was withdrawn $50.50.
Assume we do not know the number of records in the file beforehand, therefore we must build a dynamic data structure to store all the accounts. Assume the following linked-list structure:

 struct ACCOUNT {
         int accountNumber;
         float balance;
         struct ACCOUNT *next;
};
Notice that the ACCOUNT structure does not store the records of the SSV file but instead stores the balance of the accounts. Given the example SSV file, from above, having three records; It would result in a linked list of two nodes, one node for account 10 and one for account 20. The balance of account 10 would be $80.00 and the balance of account 20 would be $-50.50.
Write a project that compiles to an executable named ./bank and is made from three source files: main.c, ssv.c, and linked.c. Your source files must be built as modules with
a makefile for the project. You must determine the number of .h files, if any, you will need. Your project must use a private git. You will submit the git log. Your log must have a minimum of five entries on different dates. "
