#include<stdio.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include<ctype.h>
int getWidth() {
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&csbi);  
  return (csbi.srWindow.Right-csbi.srWindow.Left+1);
}
int getHeight(){
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&csbi);
  return (csbi.srWindow.Bottom-csbi.srWindow.Top+1);
}

void delay(float delay_time)
{
	clock_t t=clock();
    while(clock()<t+(delay_time* CLOCKS_PER_SEC)){}
	
}

void hangman(int error,int score)
{	
	if (error==0)
	{
		
		printf("_______________\n");
		printf("|             |\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|							ERROR 00\n");
		printf("|							SCORE: %d\n", score);
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|\n"); 
		printf("|_____________________\n"); 

	}
	
	else if (error==1)
	{
		
		printf("_______________\n");
		printf("|             |\n");
		printf("|           {( )}\n");
		printf("|\n");
		printf("|\n");
		printf("|							ERROR 01\n");
		printf("|							SCORE: %d\n",score);
		printf("|							TRY AGAIN\n");
		printf("|\n");
		printf("|\n");
		printf("|\n"); 
		printf("|_____________________\n"); 
	
	}
	else if (error==2)
	{
		
		printf("_______________\n");
		printf("|             |\n");
		printf("|           {( )}\n");
		printf("|             |\n");
		printf("|             |				ERROR 02\n");
		printf("|             |				SCORE: %d\n",score);
		printf("|             |				TRY AGAIN\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|\n"); 
		printf("|_____________________\n"); 
	
	}
	else if (error==3)
	{
		
		printf("_______________\n");
		printf("|             |\n");
		printf("|           {( )}\n");
		printf("|             |\n");
		printf("|            /|\n");	
		printf("|           / |				ERROR 03\n");
		printf("|          /  |				SCORE: %d\n",score);
		printf("|\n                         TRY AGAIN\n");              
		printf("|\n");
		printf("|\n");
		printf("|\n"); 
		printf("|_____________________\n"); 
	
	}
	else if (error==4)
	{
		
		printf("_______________\n");
		printf("|             |\n");
		printf("|           {( )}\n");
		printf("|             |\n");
		printf("|            /|\\\n");
		printf("|           / | \\			ERROR 04\n");
		printf("|          /  |  \\			SCORE: %d\n",score);
		printf("|             				TRY AGAIN\n");
		printf("|\n");
		printf("|\n");
		printf("|\n");
		printf("|\n"); 
		printf("|_____________________\n"); 
	
	}
	else if (error==5)
	{
		
		printf("_______________\n");
		printf("|             |\n");
		printf("|           {( )}\n");
		printf("|             |\n");
		printf("|            /|\\\n");
		printf("|           / | \\			ERROR 05\n");
		printf("|          /  |  \\			SCORE: %d\n", score);
		printf("|             |				TRY AGAIN\n");
		printf("|            /\n");
		printf("|           /\n");
		printf("|          /\n");
		printf("|\n"); 
		printf("|_____________________\n"); 
	
	}
	else if (error==6)
	{
		
		printf("_______________\n");
		printf("|             |\n");
		printf("|           {( )}\n");
		printf("|             |\n");
		printf("|            /|\\\n");
		printf("|           / | \\   		ERROR 06\n");
		printf("|          /  |  \\			SCORE: %d\n",score);
		printf("|             |				I AM DEAD\n");
		printf("|            / \\\n");
		printf("|           /   \\\n");
		printf("|          /     \\\n");
		printf("|\n"); 
		printf("|_____________________\n"); 
	
	}
}


void hangmanTitle(void){ 
    char* title[]= {" _   _                                         ",
        			 "| | | | __ _ _ __   __ _ _ __ ___   __ _ _ __  ",
        			 "| |_| |/ _` | '_ \\/  _` | '_ ` _ \\ / _` | '_ \\ ",
        			 "|  _  | (_| | | | | (_| | | | | | | (_| | | | |",
         			 "|_| |_|\\__,_|_| |_|\\__, |_| |_| |_|\\____|_| |_|",
                     "                   |___/                       "
    };

    int hight=sizeof(title)/sizeof(title[0]);
    int console_width=getWidth();
	int spaces,lines;
	
	for (int i=0;i<hight;i++){
        spaces=(console_width-strlen(title[i]))/2;
        for (int j=0;j<spaces;j++){
            printf(" ");
        }
        printf("%s\n",title[i]);
    }
}

void easyTitle(void) 
{
    char* title[] =	{"_     ___ __   __ ___  _        ____  ___  ___ __   __",
					"| |   | __|\\ \\ / /| __|| |      | ___|/   \\/ __|\\ \\ / /",
					"| |__ | _|  \\   / | _| | |__    | __| | - |\\__ \\ \\   / ",
					"|____||___|  \\_/  |___||____|   |____||_|_||___/  |_|  "};

    int hight=sizeof(title)/sizeof(title[0]);
    int console_width=getWidth();
    int console_height=getHeight();

    int spaces,lines;
	system("cls");
    lines=(console_height-hight)/2;
    for (int j=0;j<lines;j++){
        printf("\n");
    }

    for (int i=0;i<hight;i++) {
        spaces=(console_width-strlen(title[i]))/2;
        for (int j=0;j<spaces;j++) {
            printf(" ");
        }
        printf("%s\n",title[i]);
    }
    delay(2);
}


void mediumTitle(void) {
	char* title[] =				
					{"_     ___ __   __ ___  _        __  __  ___  ___   ___  _   _  __  __ ",
				    "| |   | __|\\ \\ / /| __|| |      |  \\/  || __||   \\ |_ _|| | | ||  \\/  |",
					"| |__ | _|  \\   / | _| | |__    | |\\/| || _| | |) | | | | |_| || |\\/| |",
					"|____||___|  \\_/  |___||____|   |_|  |_||___||___/ |___| \\___/ |_|  |_|"};

    int hight=sizeof(title)/sizeof(title[0]);
    int console_width=getWidth();
    int console_height=getHeight();

    int spaces,lines;
	system("cls");
    lines=(console_height - hight)/2;
    for (int j= 0;j<lines;j++) {
        printf("\n");
    }

    for (int i=0;i<hight;i++) {
        spaces = (console_width - strlen(title[i])) / 2;
        for (int j=0;j<spaces;j++) {
            printf(" ");
        }
        printf("%s\n", title[i]);
    }
    delay(2);
}


void hardTitle(void){
	
    	char* title[]={"_     ___ __   __ ___  _        _  _  ___  ___  ___ ",  
					  "| |   | __|\\ \\ / /| __|| |      | || |/   \\| _ \\|   \\", 
					  "| |__ | _|  \\   / | _| | |__    | __ || - ||   /| |) |",
					  "|____||___|  \\_/  |___||____|   |_||_||_|_||_|_\\|___/ "};

    int hight = sizeof(title)/sizeof(title[0]);
    int console_width=getWidth();
    int console_height=getHeight();

    int spaces, lines;
	system("cls");
    lines = (console_height-hight)/2;
    for (int j=0; j<lines; j++) {
        printf("\n");
    }

    for (int i=0;i<hight;i++) {
        spaces=(console_width - strlen(title[i]))/2;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        printf("%s\n",title[i]);
    }
    delay(2);
}

void guess_hints (char* hints ,char* random_word) 
{
	srand(time(NULL));
    int totalsize=strlen(random_word) + 9;
    int count=strlen(random_word)-1;
    while (count<totalsize) 
	{ 
    	char letter='a'+rand()%26;
    
    	int flag=0;
		for(int i=0;i<strlen(random_word)-1;i++)
		{
			if(random_word[i]==letter)
			{
				flag=1;
				break;	
			}	
		}   
		 
    	if(flag==1)
    	{
    		continue;
		}
		
            hints[count]=letter;
            count++;
	}
	hints[count]='\0'; 
}

void jumble(char* hints,int length) 
{    
    for (int i=length-1; i>=0; i--) 
	{
        int j=rand()%(i + 1);
        
        char temp=hints[i];
        hints[i]=hints[j];
        hints[j]=temp;
    }
}



void centertext(char* text)
{
	int i;
	int console_width=getWidth(); 
	int console_hight=getHeight(); 
	
	int spaces,lines;
	
	lines=(console_hight-1)/2;
	for (i=0 ; i<lines ; i++)
	{
		printf("\n");
	}
	
	spaces=(console_width-strlen(text))/2; 
	for (i=0;i<spaces;i++)
	{
		printf(" ");
	}
	printf("%s",text);	
	
}


void loading(void)
{
		system("cls");
		centertext("LOADING");
		delay(0.5);
		printf("..");
		delay(0.5);
		printf("..");
		delay(0.5);
		printf("..");
		delay(0.5);			
}


char* assign_word(char* a)
{
	srand(time(NULL));
	
	FILE* file;	
	if(strcmp(a, "easy")==0)
	{
		file = fopen("easy.txt" , "r");
	}
	else if(strcmp(a, "medium")==0)
	{
		file = fopen("medium.txt" , "r");
	}
	else if(strcmp(a, "hard")==0)
	{
		file = fopen("hard.txt" , "r");
	}
	else
	{
		printf("Word Assigning Error");
		exit(1);
	}	

	if(file==NULL)
	{
		printf("File Error\n");
		exit(1);
	}
	
	char buffer[20];
	int count=0;
	while(fgets(buffer, sizeof(buffer),file))
	{
		count++;
	}

	
	fseek(file,0,SEEK_SET);
	
	int desiredcount=rand()%count;
	
	
	char* word=(char*)malloc(sizeof(buffer)*sizeof(char));
	if(word==NULL)
	{
		printf("Memory Allocation Error");
		exit(1);
	}
	

	count=0;
	while(fgets(buffer, sizeof(buffer),file))
	{
		if(count==desiredcount)
		{
			strncpy(word, buffer, strlen(buffer)+1);
		} 
		count++;
	}

	
	
    fclose(file);
    
    return word;
}

int highscore(int score) 
{
    FILE *high;
    high=fopen("highscore.txt" ,"r+");
    if(high==NULL)
	{
		printf("File Error\n");
		exit(1);
	}
	
	int highscore;
    rewind(high);

    fscanf (high,"%d",&highscore);

    if (score>highscore) 
	{
        rewind(high);
        fprintf (high ,"%d",score);
        centertext("CONGRATULATIONS, YOU'VE ACHIEVED A HIGHSCORE: ");
    	printf ("%d" , score);
    }
    else {
        centertext("YOUR SCORE:");
		printf ("%d" ,score);
    }
    fclose(high);
    delay(2);
    
    return 0;
}

int see_highscore(){
	
	system("cls");
	char button;
	FILE *high;
    high = fopen ("highscore.txt" , "r");
    if(high==NULL)
	{
		printf("File Error\n");
		exit(1);
	}
	
	
	    int score;
        fscanf (high , "%d" , &score);
        centertext("HIGHSCORE:");
		printf ("%d" , score);
        fclose (high);
    
	printf("\nPRESS ANY KEY TO RETURN:");
	button = tolower(getch());
    	return 0;	
	
}




int begingame(char* random_word, int* score)
{
	system("cls");
	
	

	char word_array[strlen(random_word)+1],word_used[strlen(random_word)+1];
	int i,location,chances,error,incorrect,correct,count=0,flag;
	char alphabet;

	char hints[strlen(random_word) + 10];
	strcpy(hints ,random_word);
	guess_hints(hints ,random_word);
	jumble(hints, strlen(hints));
   
   

	for (i=0;i<strlen(random_word);i++)
	{
		word_array[i] = '_';
		word_used[i] = '_';
	}
	

	word_array[0]=random_word[0];
	word_array[strlen(random_word)-1]= random_word[strlen(random_word)-1];
	 
	correct=0,error=0;
	do
	{	
		
		incorrect=0;
		system("cls");
		hangman(error,*score); 
		printf("\n");
		for (i=0;i<strlen(random_word);i++)
		{
			printf("%c",word_array[i]);
		}
		printf("\n");
		
		
	
		printf("\nChoose Alphabet\n");
			
		for (i=0;i<(sizeof(hints)/sizeof(hints[0]));i++) 
		{
        	printf ("%c ",hints[i]);
    	}
    
		alphabet=tolower(getch());
		
		if(alphabet==27)
		{		
			system("cls");
			centertext("ARE YOU SURE TO EXIT? YOUR PROGRESS WILL BE LOST(Y):");
			alphabet=tolower(getch());
			if(alphabet==27||alphabet=='y')
			{	                              
			
				system("cls");
            	centertext("EXITING");
				delay(0.5);
				printf("..");
				delay(0.5);
				printf("..");
				delay(0.5);
				printf("..");
				delay(0.5);	
				system("cls");
				exit(0); 
			}
			else
			{
				continue;
			}
		}
		
		
		
	 
		flag=0;
		for(i=1;i<strlen(random_word)-1;i++)
		{
			if(word_used[i]==alphabet)
			{
				flag = 1;
				break;
			}
		}	
		
			
		if(flag==0)	
		{
		
			incorrect=1;
			for (i=1;i<strlen(random_word)-1;i++)
			{	     
				
				if(random_word[i]==alphabet)
				{
					word_array[i]=alphabet; 
					word_used[i]=alphabet;  
					correct++;				 
					incorrect=0;			  
					*score+=2;
				}		
				
			}
			
		}			
		else
		{
			incorrect=1;
		}
			
		if (incorrect==1)	
		{
			error+=1;
		}	
		
		for (i=0;i<(sizeof(hints)/sizeof(hints[0]));i++)
		{
        	if (alphabet==hints[i]) 
			{
           		hints[i]=' ';
        	}
     	}
		
 	
		printf("\n");	
	}while(error<6 && correct<strlen(random_word)-2);		
	
		
	return error;
}

int check_status(int wins,int status,char* random_word)
{
	system("cls");
	if (status<6)  
	{
		system("cls");
		centertext("CORRECT GUESS");
		delay(2);
		wins++; 
	}
	else 
	{
		system("cls");
		centertext("WRONG GUESS");
		delay(2);
		system("cls");
		centertext("The word was");		
		printf("%s",random_word);
		delay(2);
		system("cls");
	}
			
	return wins;
			
}



void playgame(void)
{	
	
		easyTitle();
	
	
		int i,wins=0,score=0;
		int status;	
		
		
		for(i=0;i<3;i++)
		{ 
			char* random_word = assign_word("easy"); 
			status=begingame(random_word, &score);
			wins=check_status(wins, status, random_word);	
			free(random_word);
		}
		
		
		system("cls");
		if(wins>1)
		{		
			wins=0;	
			delay(2);
			system("cls");
			centertext("MOVING ON TO THE NEXT LEVEL");
			delay(2);
			loading();
			mediumTitle();		
				
			for(i=0;i<3;i++)
			{	
				char* random_word=assign_word("medium");  
				
				status=begingame(random_word,&score);
				wins=check_status(wins,status,random_word);	
				free(random_word);			
			}
		}
		else
		{
			system("cls");
			centertext("YOU LOST THE GAME");
			delay(2);		
		}

		system("cls");
		if(wins>1)
		{		
			wins=0;
	
			delay(2);
			system("cls");
			centertext("MOVING ON TO THE NEXT LEVEL");
			delay(2);
			loading();
			hardTitle();
		
			for(i=0;i<3;i++)
			{
				char* random_word=assign_word("hard");  
				
				status=begingame(random_word,&score);
				wins=check_status(wins, status,random_word); 
				free(random_word);
			}
			if(wins>1)
			{
					
				system("cls");
				centertext("CONGRATULATIONS! YOU WON THE GAME");
				delay(2);
			}
		}
		else
		{
			system("cls");
			centertext("YOU LOST THE GAME");
			delay(2);
		}


	
	system("cls");
	highscore(score);


}

void multiplayer(void){
	
	system("cls");
    char player1[50],player2[50];
    char word[50];
	char character;
    int num_words,score1=0,score2=0,status;
	

    printf("ENTER 1ST PLAYER'S NAME: ");
    scanf("%s",player1);
    printf("ENTER 2ND PLAYER'S NAME: ");
    scanf("%s",player2);

  
    printf("For how many words do you want to play? ");
    scanf("%d",&num_words);
	system("cls");
  
    for (int j=0; j<num_words;j++) 
	{
		int i=0;  
		
		
		printf("%s, enter a word: ",player1);
        while (1) 
		{
           	character=tolower(getch());
            if (character==13) 
			{ 
                break;
            } 
			else if (character==8 && i>0) 
			{
                printf("\b \b");
                i--;
                continue;
            } else if (character!=8){
                word[i++] = character;
                printf("*");
            }
        }
 		word[i]='\0';
    
   
        status=begingame(word,&score2);


      
		system("cls");
        printf("%s, enter a word: ",player2);
        i=0;
 		while (i<sizeof(word)-1) 
		{
        	character=getch();
        	if (character==13) 
			{
       	    	break;
       		}
        	else if (character==8 && i>0) 
			{
            	printf ("\b \b");
            	i--;
            	continue;
        	}
        	else if(character!=8) 
			{
            	word[i++]=character;
           		printf("*");
       		}
	    }
    		word[i]='\0';
 
     
        
      status= begingame(word,&score1);


    
		    system("cls");
	}

    printf("\nCORRECT GUSSES:\n");
    printf("%s: %d\n%s: %d\n",player1,score1,player2,score2);

    if (score1>score2) {
        printf("%s WINS!\n", player1);
    } else if (score1<score2) {
        printf("%s WINS!\n", player2);
    } else {
        printf("It's a tie!\n");
    }
    printf("\n\nPress any key to continue:");
    char c=getch();
    
}
void instructions(void) 
{
	hangmanTitle();
	system("cls");
		char* intstructions[]={
			        "                               SINGLE PLAYER:                                            ",
					"1)There are three levels in the game: easy, medium, and hard.                            ",
					"2)For each level, the player has to guess 3 different words                              ",
					"3)All letters are in lower case.                                                         ",
					"4)The player has to guess each word letter by letter.                                    ",
					"5)If the player guesses each word correctly then he wins and moves on to the next level. ",
					"6)Each time a wrong letter is guessed, a part of the hangman is drawn.                   ",
					"7)If the Hangman is completed before the word is guessed, one loss is counted. If the    ", 
					"  player is unable to guess two out of three words in a certain level, he loses.         ",
					"8)Reusing a letter is counted as wrong.                                                  ",
					"9)Each correctly guessed letter increases score by 2, No negative marking.               ",
					"\n                                                                                       ",
					"                               MULTIPLAYER:                                              ",
					"1)The number of words for which the game will be played will be decided in the beginning.",
					"2)Scores for each correctly guessed letters will be counted for both players.            ",
					"3)The player with the highest score will win the game!                                   "

					
	};
	
	int intstructionsItems=sizeof(intstructions)/sizeof(intstructions[0]);
	
	char choice;
	int i,j;
	int console_width=getWidth();
	int console_hight=getHeight();
	
	int spaces,lines;
	
	do{	
	
		system("cls");
		hangmanTitle();	
		lines=(console_hight-intstructionsItems-9)/2;  		
		for (j=0;j<lines;j++)
		{
			printf("\n");
		}
	
		for (i=0;i<intstructionsItems;i++)
		{
			
			spaces=(console_width-strlen(intstructions[i]))/2; 
			for (j=0;j<spaces;j++)
			{
				printf(" ");
			}
			printf("%s\n",intstructions[i]);
		}
			
			printf("BACK(b):");
		choice=tolower(getch()); 
	}while(choice!='b');
			
}

void menu(void) 
{

	char* menu[]={
					"1. Play New Game",
					"2. Multiplayer  ",
					"3. High Score   ",					
					"4. Instructions ",
					"5. Exit         "
	};
	
	int menuitems=sizeof(menu)/sizeof(menu[0]);
	
	char choice;
	int i,j;
	int console_width=getWidth();
	int console_hight=getHeight();
	
	int spaces,lines;
	
	do{	
		hangmanTitle();		
		lines=(console_hight-menuitems)/2;		
		for (j=0;j<lines;j++)
		{
			printf("\n");
		}
	
		for (i=0;i<menuitems;i++)
		{
			
			spaces=(console_width-strlen(menu[i]))/2;
			for (j=0;j<spaces;j++)
			{
				printf(" ");
			}
				printf("%s\n",menu[i]);
			}
			choice=getch();
		
			
	   switch(choice) 
		{
    		case '1':	
				loading();	
				playgame();	
				delay(2);
    	    	break;
        
			case '2':	
				loading();	
				multiplayer();	
				delay(2);
    	    	break;
        
        	case '3':        
 		       see_highscore();
 		       
				loading(); 
    			break;
        
			case '4':
				loading();	
  	    	    instructions();
  	    	    loading();
            	break;
		
			case '5': 
			case 27:
				system("cls");
            	centertext("EXITING");
				delay(0.5);
				printf("..");
				delay(0.5);
				printf("..");
				delay(0.5);
				printf("..");
				delay(0.5);	
				system("cls");
				exit(0); 
           		break;
        
		    default:
            	printf("Invalid choice. Please try again.\n");
           		break;
		}
	system("cls");
		
	}while(1);
	
}

int main ()
{		
	srand(time(NULL)); 	
	delay(2);
	menu();
	return 0;
}

