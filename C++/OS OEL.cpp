#include<stdio.h>


int length,no_of_frames;
int page_ref[100];
int pages[50];
int hit=0;
int i,j,k;
int count_page_faults=0;
 
void Insert_Data()
{
    printf("\nPlease Enter the length of page reference sequence= ");
    scanf("%d",&length);
    printf("\nNow Please Enter the page reference sequence= ");
    for(int i=0; i<length; i++)
        scanf("%d",&page_ref[i]);
    printf("\nPlease Enter the Number of Frames= ");
    scanf("%d",&no_of_frames);
}

bool empty()
{
	if (length==0 || page_ref[i]==-1 || no_of_frames==0)
	{
	printf("\n Error...Process is Empty... ");
	 
	 return true;
	 }
	  else
	  {
	  	return false;
	  }
}
 
void Start()
{
    count_page_faults=0;
    for( i=0; i<no_of_frames; i++)
        pages[i]=1000;
}
 
int is_there_a_Hit(int data)
{
    hit=0;
    for( j=0; j<no_of_frames; j++)
    {
        if(pages[j]==data)
        {
            hit=1;
            break;
        }
 
    }
 
    return hit;
}
 
int Hit_Index(int data)
{
    int hit_index;
    for( k=0; k<no_of_frames; k++)
    {
        if(pages[k]==data)
        {
            hit_index=k;
            break;
        }
    }
    return hit_index;
}
 
void display_pages()
{
	if (!empty())
	{
	
    for (k=0; k<no_of_frames; k++)
    {
        if(pages[k]!=1000)
            printf(" %d",pages[k]);
    }
}
}
 
void display_Page_Fault_Count()
{
    printf("\nTotal no of page faults are= %d",count_page_faults);
}
 
void Fifo()
{
	if (!empty())
	{
	
    Start();
    for( i=0; i<length; i++)
    {
        printf("\nFor %d= ",page_ref[i]);
 
        if(is_there_a_Hit(page_ref[i])==0)
        {
 
            for(k=0; k<no_of_frames-1; k++)
                pages[k]=pages[k+1];
 
            pages[k]=page_ref[i];
            count_page_faults++;
            display_pages();
        }
        else
            printf("There is No page Fault Occured!");
    }
    display_Page_Fault_Count();
}
}
 
 
void Optimal()
{
	if (!empty())
	{
	
    Start();
    int near[50];
    for(i=0; i<length; i++)
    {
 
        printf("\nFor %d= ",page_ref[i]);
 
        if(is_there_a_Hit(page_ref[i])==0)
        {
 
            for(int j=0; j<no_of_frames; j++)
            {
                int pg=pages[j];
                int found=0;
                for(k=i; k<length; k++)
                {
                    if(pg==page_ref[k])
                    {
                        near[j]=k;
                        found=1;
                        break;
                    }
                    else
                        found=0;
                }
                if(!found)
                    near[j]=1000;
            }
            int max=-1000;
            int repindex;
            for(j=0; j<no_of_frames; j++)
            {
                if(near[j]>max)
                {
                    max=near[j];
                    repindex=j;
                }
            }
            pages[repindex]=page_ref[i];
            count_page_faults++;
 
            display_pages();
        }
        else
            printf("No Page Fault Occured!");
    }
    display_Page_Fault_Count();
}
}

 
void Least_Recently_Used()
{
	if (!empty())
	{
	
    Start();
 
    int least[50];
    for(i=0; i<length; i++)
    {
 
        printf("\nFor %d= ",page_ref[i]);
 
        if(is_there_a_Hit(page_ref[i])==0)
        {
 
            for(j=0; j<no_of_frames; j++)
            {
                int pg=pages[j];
                int found=0;
                for(k=i-1; k>=0; k--)
                {
                    if(pg==page_ref[k])
                    {
                        least[j]=k;
                        found=1;
                        break;
                    }
                    else
                        found=0;
                }
                if(!found)
                    least[j]=-1000;
            }
            int min=1000;
            int repindex;
            for(j=0; j<no_of_frames; j++)
            {
                if(least[j]<min)
                {
                    min=least[j];
                    repindex=j;
                }
            }
            pages[repindex]=page_ref[i];
            count_page_faults++;
 
            display_pages();
        }
        else
            printf("No Page Fault Occured!");
    }
   
    display_Page_Fault_Count();
}
}

 
void Least_Frequently_Used()
{
	if (!empty())
{

    int usedcnt[100];
    int least,repin,sofarcnt=0,bn;
    Start();
    for(i=0; i<no_of_frames; i++)
        usedcnt[i]=0;
 
    for(i=0; i<length; i++)
    {
 
        printf("\n For %d= ",page_ref[i]);
        if(is_there_a_Hit(page_ref[i]))
        {
            int hitind=Hit_Index(page_ref[i]);
            usedcnt[hitind]++;
            printf("No Page Fault Occured!");
        }
        else
        {
            count_page_faults++;
            if(bn<no_of_frames)
            {
                pages[bn]=page_ref[i];
                usedcnt[bn]=usedcnt[bn]+1;
                bn++;
            }
            else
            {
                least=1000;
                for(k=0; k<no_of_frames; k++)
                    if(usedcnt[k]<least)
                    {
                        least=usedcnt[k];
                        repin=k;
                    }
                pages[repin]=page_ref[i];
                sofarcnt=0;
                for(k=0; k<=i; k++)
                    if(page_ref[i]==page_ref[k])
                        sofarcnt=sofarcnt+1;
                usedcnt[repin]=sofarcnt;
            }
 
            display_pages();
        }
 
    }
    display_Page_Fault_Count();
}
}
 

 
int main()
{
    int choice;
    while(1)
    {
        printf("\nPage Replacement Algorithms\n1.Enter data\n2.FIFO\n3.Optimal\n4.LRU\n5.LFU\n6.Exit\nEnter your choice= ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Insert_Data();
            break;
        case 2:
            Fifo();
            break;
        case 3:
            Optimal();
            break;
        case 4:
            Least_Recently_Used();
            break;
        case 5:
            Least_Frequently_Used();
            break;
        
            default:
            return 0;
            break;
        }
    }
}
