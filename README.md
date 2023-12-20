A program representing the management of a bank account. Upon running the program, the user is presented with the following menu:
1. New Transaction
2. Apply transaction
3. Pending transaction
4. Discard pending transaction
5. Balance
6. Exit
   

Adding a new transaction does not change the account balance. The transaction is saved for later application, and the system can have an infinite number of transactions waiting for application. 
Transactions are applied in the order they arrive. The user has the option to view the transaction ready for application, discard the next transaction, and print the current account balance. 
The program handles boundary cases, such as selecting the option to apply a transaction when there are no transactions in the system.
A single transaction is described by a value that is added/removed from the account, along with the date and time.
