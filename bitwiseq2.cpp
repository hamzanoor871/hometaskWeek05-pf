#include<stdio.h>
int main(){
	int pool,suana,personalTrainer,fullHour,customerNumber,hour,permission;
	pool =1;
	suana=2;
	personalTrainer=4;
	fullHour=8;
	printf("Enter customer number :");
	scanf("%d",&customerNumber);
	while(customerNumber != 9999){
		printf("enter hour (0-23): \n");
		scanf("%d",&hour);
		if(hour>=22 || hour <=6){
			printf("late nigth mode\n");
			if(customerNumber & fullHour){
				printf("access granted\n");
				permission=1;
			}	
			else{
			printf("\naccess deined");
			permission =0;
			}
		}
		else{
			printf("\nstandard mode");
			if(customerNumber & pool || customerNumber & personalTrainer || customerNumber & suana){
				printf("\naccess granted\n");
				permission=1;
			}
			else {
			printf("\naccess denied");
			permission =0;
			}
		}
		if(permission){
			if(customerNumber & personalTrainer ){
				printf("\nNeeds a personal trainer");
			}
			
      	}
      	printf("Enter Customer Number");
      	scanf("%d",customernumber);
	}
}