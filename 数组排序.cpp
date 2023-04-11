//#include <stdio.h>
//#include <stdlib.h>
////
////int main()
//{
//    int a[6],i,j,k = 6,m = 1,t;
//    for(i=0;i<6;i++)
//        scanf("%d",&a[i]);
//       // max = a[6];
//    for(j = 5;j>=0;j--){
//    for(i = 0;i<k;i++){
//    	if(a[i]>a[m]){
//    		m = i;
//		}
////    		t = a[i+1];
////    		a[i] = t;
////    		a[i+1] = a[i];
//	
//	}
//	t = a[m];
//	a[m] = a[j];
//	a[j] = a[m];
//	k--;
//} 
////    for(j=0;j<40-1;j++)
////    for(i=0;i<40-1-j;i++)
////    if(a[i]>a[i+1])
////    {t=a[i];a[i]=a[i+1];a[i+1]=t;}
//    for(i=0;i<6;i++)
//    printf("%d ",a[i]);
//    return 0;
//}
//#include<math.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[40];
	int num;
	int i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	int j;
	int temp;
	for(i =0;i<6-1;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				temp =a[i];
				a[i] =a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}


