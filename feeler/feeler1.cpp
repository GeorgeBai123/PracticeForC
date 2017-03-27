#include <stdio.h>
#include <conio.h>

int main()
{	
	int i[7],j,start,end;
	printf("Input the begin of random number: ");
	scanf("%d",&start);
	printf("Input the end of random number: ");
	scanf("%d",&end);
	for (i[0]=start; i[0] < end; i[0]++) { 
			for (i[1]=start; i[1] < end; i[1]++) { 
				if (i[0]==i[1]) continue;
				for (i[2]=start; i[2] < end; i[2]++) { 
					if(i[0]==i[2] || i[1]==i[2]) continue;
					for (i[3]=start; i[3] < end; i[3]++) { 
						if(i[0]==i[3] || i[1]==i[3] || i[2]==i[3]) continue;
						for (i[4]=start; i[4] < end; i[4]++) { 
							if(i[0]==i[4] || i[1]==i[4] || i[2]==i[4] || i[3]==i[4]) continue;
							for (i[5]=start; i[5] < end; i[5]++) { 
								if(i[0]==i[5] || i[1]==i[5] || i[2]==i[5] || i[3]==i[5]|| i[4]==i[5]) continue;
								for (i[6]=start; i[6] < end; i[6]++) { 
									if(i[0]==i[6] || i[1]==i[6] || i[2]==i[6] || i[3]==i[6]|| i[4]==i[6] || i[5]==i[6]) continue;
									for (int j = 0; j < 7; j++)
									{
										printf("%3d", i[j]);
									}
									printf("\n");
									getch();
								}
							}
						}
					}
				}
			}
		}
	
}
