/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "GO.h"
#include <stdio.h>

rx *
read_32_svc(values *argp, struct svc_req *rqstp)
{
	static rx  result;

	/*
	 * insert server code here
	 */

int i;

printf ("The Array lenght is :%d\n",argp->N); //// O.K chon az client ferestade shode mishnasad
  
printf ("The array you entered is :\n");  // O.K
for (i=0;i<argp->N+argp->s;i++)
 printf ("%d.......%d\n",i,argp->a[i]); 


for (i=0;i<argp->N+argp->s;i++)
   result.arr[i]=argp->a[i];

 printf ("this is the Array :\n");
 
for (i=0;i<argp->N+argp->s;i++)
   printf ("%d\n",result.arr[i]);

printf ("THE END OF READ_27_svc\n");

	return &result;
}


//////////////******/////******************///////*******//////*****///////////

rx *
write_32_svc(values *argp, struct svc_req *rqstp)
{
	static rx  result;

	/*
	 * insert server code here
	 */

int i;

for (i=0;i<argp->N;i++)
   result.arr[i]=argp->a[i];
     printf ("this is the Arrey :\n");

printf ("the array elements are :\n");
for (i=0;i<argp->N;i++)
   printf ("%d................%d\n",i,result.arr[i]);

	return &result;
}
