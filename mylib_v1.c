//#include <stdio.h>
//#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)
//#include <windows.h>
//inline void delay( unsigned long ms ) { Sleep( ms ); }
//#else /* presume POSIX */
//#include <unistd.h>
//inline void delay( unsigned long ms ) { usleep( ms * 1000 ); }
//#endif
//
//void mylib_run(void) {
//	
//	char username[50];
//	char password[50];
//	
//	delay(1000);
//    printf("\nLoading ");
//    for(int i = 0; i <= 5; i++){
//    	printf(". ");
//    	delay(1000);
//	}
//	printf("\n");
//	printf("\n------------------------------------------------------------------------------\n");
//	printf("\n");
//    //delay(1000); // Delays for 2000 milliseconds (2 seconds)
//    printf("Username : ");
//    scanf("%s", username); 
//    printf("\n");
//    printf("Password : ");
//    scanf("%s", password);
//    printf("\n");
//    printf("==============================================================================\n");
//    printf("                                                                              \n");
//    printf("                      ----- Welcome %s -----                           \n",username);
//    printf("                                                                              \n");
//    printf("==============================================================================\n");
//    delay(1000);
//    
//    int number;
//    
//    printf("\n");
//    while(1){
//    	delay(1000);
//    	printf("===== Press Ctrl+C to stop =====");
//    	printf("\n\n");
//    	printf("Input the numberic value : ");
//    scanf("%d", &number);
//    for(int k=0;k<number;k++){
//    	for(int j=0;j<k;j++){
//    		printf("*");
//		}
//		printf("\n");
//	}
//	for(int k=number;k>0;k--){
//    	for(int j=k;j>0;j--){
//    		printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	}
//	
//    
//}

