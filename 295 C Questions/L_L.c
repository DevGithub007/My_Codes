#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void divide(struct node *start,int );
struct node *create(struct node *start);
main(){
	int total;
	struct node *start=NULL;
	start=create(start);
	//printf("\nstart->data=%d",start->data);
	display(start);
	total=sum(start);
	printf("\n\nsum is %d",total);
	if((total%2))
		{
		printf("\ncan not be divided");
		exit(0);
		}
	else
		{
		printf("\ninside main else\n");		
		divide(start,total);
}}
struct node *create(struct node *start)
{
	int i,a,b,n;
	struct node *p,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	p=(struct node *)malloc(sizeof(struct node));
	//p=start;
	printf("enter no. of terms:");
	scanf("%d",&a);
	printf("\nenter data 1:");
	scanf("%d",&b);
	tmp->data=b;
	tmp->next=NULL;
	start=tmp;
	p=tmp;
	//printf("\nbefore for tmp->data=%d,start->data=%d\n",tmp->data,start->data);
	//free (tmp);
//	printf("\nbefore for start->data=%d\n",start->data);
	for(i=1;i<a;i++)
	{
		tmp=(struct node *)malloc(sizeof(struct node));
		printf("\nenter term %d :",i+1);
		scanf("%d",&b);
		tmp->data=b;
		tmp->next=NULL;
		
		p->next=tmp;
		p=p->next;
	//	printf("\nin for tmp->data=%d\np->data=%d\nstart->data=%d\n",tmp->data,p->data,start->data);
	}
	//printf("\nout of for tmp->data=%d\np->data=%d\nstart->data=%d\n",tmp->data,p->data,start->data);
	return start;
}
void display(start){
	int i;
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p=start;
	for(i=0;i<5&&p!=NULL;i++)
	{
		printf("\nterm %d is :%d",i+1,p->data);
		p=p->next;
	}

}
int sum(struct node *start)
{
	int add=0;
	struct node *p;
	//tmp=start;
	p=(struct node *)malloc(sizeof(struct node));
	p=start;
	while(p!=NULL)
	{
		add+=p->data;
		p=p->next;
	}
	//start=tmp;
	return add;
}
void divide (struct node *start,int total)
{
	printf("\ninside divide\n");
	int a,b,c,i,j,t,flag=0,u;
	a=total/2;
	b=a;
	struct node *p,*q,*tmp;
	tmp=(struct node *)malloc(sizeof(struct node));
	p=(struct node *)malloc(sizeof(struct node));
	p=start;
	for(i=0;b>(a/2);i++)
	{
		p=(struct node *)malloc(sizeof(struct node));
		p=start;
		printf("\ninside first for i=%d,p->data=%d\n",i,p->data);
		while(p!=NULL)
		{
			if(p->data==b)
			{
				t=i;
				printf("\n%d found at %d\na=%d\nb=%d\n",b,t,a,b);
				//for(j=0;(a-b)<a/2;j++)
				//{
					q=(struct node *)malloc(sizeof(struct node));
					q=start;
				//	printf("\ninside second for j=%d,p->data=%d\n",j,p->data);
					while(q!=NULL)
					{
						if(q->data==(a-b))
						{
							printf("\ninside second while-if p->data=%d\n",q->data);
							u=j;
							flag=1;
						}
						q=q->next;	
					}
				//}
				if(flag)
				{
					p=(struct node *)malloc(sizeof(struct node));
					p=start;
					printf("\n subpart is:");
					while(p!=NULL)
					{
						if(i!=t||i!=q)
						printf("%d ",p->data);
					}
				}
		//	else
		//		b--;
			}
			p=p->next;
		}
		if(!flag)
			b--;
	}
}
