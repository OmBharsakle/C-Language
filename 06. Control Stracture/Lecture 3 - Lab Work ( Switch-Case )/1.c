////// 1. WAP to create/simulate telecom call service conversation scenario using nested switch case.
////#include<stdio.h>
////main()
////{
////	int n;
////	
////	printf("Welcome To OMG CREATION\n");
////	printf("1. Hindi Ke Liye 1 Press Kijiye.\n");
////	printf("2. English Ke Liye 2 Press Kijiye.\n");
////	printf("3. Call Cut Karne Ke Liye 3 Press Kijiye.\n");
////	scanf("%d",&n);
////	
////	switch(n)
////	{
////		case 1 : printf("Agar Koi Takaniki Khami Ho To 1 Press Kijiye.\n");
////		scanf("%d",&n);
////		
////		
////		switch(n)
////		{
////			case 1 : printf("Ap Ko Koi Takaniki Khami Ho To App Company Mai Visit Kareye.\n\n");
////					 printf("Customer Care Se Bat Karane Ke Liye 2 Press Kijiye.\n");
////					 scanf("%d",&n);
////					 
////					 switch(n)
////					 {
////					 	case 1 : printf("Ap Ko Koi Takaniki Khami Ho To App Company Mai Visit Kareye.\n\n");
////					 	break;
////					 	case 2 : printf("Aap Ki Call Hamare Adhikari Se Jodi Ja Rahi Hai.\n");
////					 	break;
////					 	
////					 }
////			break;		 
////			case 2 : printf("Aap Ki Call Hamare Adhikari Se Jodi Ja Rahi Hai.\n");
////		  
////		}
////	
////		break;
////		case 2 : printf("If there is a technical issue, please press 1.");
////		
////	 				 printf("If you have a technical issue, please visit our company.\n\n");
////					 printf("To speak with Customer Care, please press 3. \n");
////					 
////					 scanf("%d",&n);
////					 
////					 switch(n)
////					 {
////					 	case 1 : printf("If you have a technical issue, please visit our company in person.\n\n");
////					 	break;
////					 	case 2 : printf("Your call is being connected to our officer. \n");
////					 	break;
////					  
////					 	
////					 }
////			break;		 
////			case 3 : printf("Your call is being connected to our officer. \n");
////		
////		break;
////	}
////			
////}
////
//
//#include<stdio.h>
//#include<conio.h>
//
//main()
//{
//	
//	int tel;
//	printf("Please Enter This No. -->6355199097<-- : ");
//	scanf("%d",&tel);
//	
//	switch(tel)
//	{
//		case 6355199097 : printf("Thanks For A Calling\n");
//		
//		int enter;
//		printf("Pleace Enter Only 1 and 2 Value\n\n");
//		printf("1.Hindi\n");
//		printf("2.English\n\n");
//		
//		printf("Dial Option on value :\n");
//		scanf("%d",&enter);
//		
//		switch(enter)
//		{
//			case 1:printf("aapane Hindi mein Pravesh Kiya Hai\n\n");
//			int del;
//			printf("1.takniki samasya ke liye\n");
//			printf("2.application mein agar koi truti a rahi hai to dial kare\n\n");
//			printf("Dial Option on value :\n");
//			scanf("%d",&del);
//			switch(del)
//			{
//				case 1:printf("aapane Jo Vikalp dial kiya hai takniki samasya ke liye\n\n");
//				printf("takniki samasya ke liye Hame Khed Hai Hum iske liye shma Chahte Hain Ham is per avashya karyvahi Karenge");
//				break;
//				case 2:printf("aapane Jo Vikalp dial kiya hai application mein agar koi truti a rahi hai to dial kare\n\n");
//				printf("aapki baat technical team se Karai ja rahi hai");
//			}
//			break;
//			case 2:printf("You have entered English\n\n");
//			int de;
//			printf("1.for technical problem\n");
//			printf("2.If there is any error in the application then dial\n\n");
//			printf("Dial Option on value :\n");
//			scanf("%d",&de);
//			
//			switch(de)
//			{
//				case 1:printf("the option you dialed for technical problem\n\n");
//				printf("We are sorry for the technical issue, we apologize for this, we will take action on it");
//				break;
//				case 2:printf("the option you dialed If there is any error in the application then dial\n\n");
//				printf("You are being referred to the technical team");
//			}
//			break;
//		}
//		default:printf("Your Number is incorrect please redial!");
//	}
//	
//}

#include<stdio.h>

int main()
{
	int choise;

	printf("Hello sir/madam\n");

	printf("For call end press : 0\nFor call continue press : 1\n");
	scanf("%d",&choise);

	switch(choise)
	{
		case 0 : printf("Call is end");
		break;
		case 1 : printf("Call is Continue\n");

		printf("\nSelect your language\n");
		printf("\nFor English press - 1");
		printf("\nFor Hindi press - 2");
		printf("\nFor Gujarati press - 3");

		printf("\nEnter the number (1,2,3) to select your number : ");
		scanf("%d",&choise);

		switch(choise)
		{
			case 1 : printf("\nEnglish");

			printf("\nSelect your service\n");
			printf("\nRegister complain - 1");
			printf("\nTalk to customer care - 2");
			printf("\nInquiry for more services - 3\n");

			printf("Enter the number to choose your service : ");
			scanf("%d",&choise);

			switch(choise)
			{
				case 1 : printf("\nRegister complain\n");
				break;
				case 2 : printf("\nTalk to customer care\n");
				break;
				case 3 : printf("\nInquiry for more services\n");
				break;
			}
			break;

			case 2 : printf("\nHindi");

			printf("\nseva chunne ke liye number darj karen\n");
			printf("\nShikayat darj karen - 1");
			printf("\ncustomer care se baat karen - 2");
			printf("\nAdhik seva ke liye puchtach karen - 3\n");

			printf("Apni seva chunne ke liye number darj karen : ");
			scanf("%d",&choise);

			switch(choise)
			{
				case 1 : printf("\nShikayat darj karen\n");
				break;
				case 2 : printf("\ncustomer care se baat karen\n");
				break;
				case 3 : printf("\nAdhik seva ke liye puchtach karen\n");
				break;
			}
			break;

			case 3 : printf("Gujarati");

			printf("\nseva melavva mate number batavo\n");
			printf("\nFariyad darj karo - 1");
			printf("\ncustomer care sathe vat karo - 2");
			printf("\nVadhu seva mate puchparch karo - 3\n");

			printf("Apni seva pasand karva mate number darj karo : ");
			scanf("%d",&choise);

			switch(choise)
			{
				case 1 : printf("\nFariyad darj karo\n");
				break;
				case 2 : printf("\ncustomer care sathe vat karo\n");
				break;
				case 3 : printf("\nVadhu seva mate puchparch karo\n");
				break;
			}
			break;
		}
	}

	return 0;
}
