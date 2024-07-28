#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void main(){
    while(true)
    {
        int ch;
        printf("Enter \n1:FCFS\n2:SCAN\n3:Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
             int head1,distance1,i,n,seektime1=0,a[20],ch;
              printf("Enter initial head position\n");
   scanf("%d",&head1);
   printf("Enter number of requests\n");
   scanf("%d",&n);
   printf("Enter requests\n");
   for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
   a[0]= head1;
   printf("FCFS\n");
   for(i=0;i<n;i++){
    distance1=abs(a[i]-a[i+1]);
    printf("Head movement from %d to %d is %d\n",a[i],a[i+1],distance1);
    seektime1+=distance1;
   }
   printf("Seektime is %d",seektime1);

break;
case 2:
 int head2,limit,distance2,seektime2 = 0 ,size,direction;

   printf("Enter initial head position\n");
   scanf("%d",&head2);

   printf("Enter number of requests\n");
   scanf("%d",&limit);
   int req[limit];

   printf("Enter requests:\n");
   for(int i=0; i< limit ;i++)
    scanf("%d",&req[i]);

    printf("\nEnter total disk size : ");
    scanf("%d",&size);

    printf("\nEnter the head movement direction(1 for high & 0 for low) : ");
    scanf("%d",&direction);

    //Sorting the req in asc
    for(int i=0 ;i < limit ;i++){
        for(int j=i+1; j<limit ;j++){
            if(req[i]>req[j]){
                int temp = req[i];
                req[i]=req[j];
                req[j]=temp;
            }
        }
    }

    if(direction==1){
        seektime2 += size - 1 - head2;
        if (req[0] < head2){
            seektime2 += size - 1 - req[0];
        }
    }
    else{
        seektime2 += head2;
        if (req[limit-1] > head2){
            seektime2 += req[limit-1];
        }
    }
    printf("Total Head Movement is %d\n",seektime2);
    break;
    
}
        }
}


        
    
