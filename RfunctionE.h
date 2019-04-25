
  #include "encryptionFunction.h"  
    int REncryption(){  //global function
    
    int encryptionFunction();{   //this files function
    //encryptionFunction(); this is how to use it here       

	//*************************************************************************
	//int RotationEncrption
/*  This encryption method cannot have a negative key you have to loop around 
    only works isolated with the menu input cannot be done and rotation 
    function menu prints twice  
    
    how it works text is made into a value (ascii) and a positive 
    key rotation is performed on the ascii 
    the ascii this then turned back into the characters they represent
    
    the end ask's the user if they want to write the encrption to a file for storage 
    
    to do:make the function have a fileinput option and the start and make it able
    to do more than 1 encrption without having to restart  
    
    ***************************************************************************
*/

	int endselection; 
	int startselection;
	char characterAscii;
	char Text[1000];
	int i;
	int key;

	
	
	printf("Welcome To Rotation Encrption\n");
	printf("would you like too write you own text or import from a txt\n");
	printf("1) Input\n2) Import");
	scanf("%d",&startselection);
        switch(startselection){
	        case 1:
	            if(startselection==1)
	                printf("*************************\n");      //prompt
	                printf("Enter a message to encrypt: ");
	                gets(Text);                                 //gets is a better scanf fgets file form
	                printf("Enter key: ");                      
                    scanf("%d", &key);
                    
                    encryptionFunction();                       //function written within encryptionFunction.h file
                    
                    printf("*************************\n");
	                printf("your message Encrypted is : %s\n", Text);
	                printf("*************************\n");
	                break;
            case 2:
                if
                    

	printf("*************************\n");
	printf("your message Encrypted is : %s\n", Text);
	printf("*************************\n");
	//File output section 
	printf("would you like to write the encryption to a txt file?\n");
	printf("1) Yes\n2) No");
	scanf("%d",&endselection);
*/	
	    return 0;
        }
    }
}
    
    
