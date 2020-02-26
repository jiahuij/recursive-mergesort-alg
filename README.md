# recursive-mergesort-alg

A program in VS C++ to implement the recursive mergesort algorithm shown in class(the one that keeps splitting the listand 
creating new memory space for its sublistsrecursively). The numbers contained in the listto be sorted are nonnegativeintegers. 
You should use a filetakenas input byyour program to storethe integers to be sorted. The integers are stored in the file in such 
a way that each line contains only one integer. You should name the input filep1data.txtand hard code itin your program. Make sure
your program sorts the entire list innondecreasingorder.To handle the way new memory space is created for those sublists, youmight
either use vectors or createdynamic arrays. The ideafor the latteris to use the operator new[] to create arrays dynamically. 
The following shows how a dynamic array can be created and deleted. A sample program showing you how to do both operationswill
be demonstrated in class.int *foo = new int[10];delete[] foo;Once the entire listis sorted, your program should printtheresult 
to the screen.
