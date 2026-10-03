#include<stdio.h>
int main(){
	int light,heater,AC,camera,applianceValue,changeValue;
	light=1;
	heater=2;
	AC=4;
	camera=8;
    
   	do{
   		if(applianceValue==-1){
		   break;
		   }
		printf("Enter Your Appeliance Value : ");
		scanf("%d", &applianceValue);
		printf("Enter Panel Function \n 1) Switch the water heater on \n 2)Switch the "
	    "water AC of regardless on what else is runnig \n 3) Flip the lights \n 4)Check Camera "
		"is on or not \n");
		scanf("%d",&changeValue);
	    switch(changeValue){
	    	case 1 :
	    		applianceValue = applianceValue | 2;
	    		break;
			case 2 : 
			    applianceValue = applianceValue & ~4;
			    break;
			case 3:
			    applianceValue = applianceValue ^ 1;		
	    	    break;
			case 4:
				if (applianceValue & 8 ){    // agar off hoga toh pura zero hojayega or non zero false hoga
					printf("camera is on"); // agar value non zero hui tabhi run karega 
				}
				else{
					printf("camera is off");
				}
	    	    	
		}
		printf("\nThe combined value is %d \n",	applianceValue);
		if ((applianceValue & 4) && (applianceValue & 2)){
			printf("\nOverload");
		}
		
	}while(applianceValue != -1);
}