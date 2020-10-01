#include"bhakti.c"
void start(void)
{
	printf("LET's BEGIN'");
	getch();
}

void xit(void)
{
	printf("You are free to go.\n");
	exit(0);
}
int main()
{
  char x;
  do
  {

	char ans,y;
	int count=0;
    /*Starting of quiz*/
    
    printf("Which Quiz do you want to play first?\n");
    printf("(a)Throne of Glass Series\n(b)The Hunger Game Series\n(c)The Maze Runner Series\n(d)Red Queen Series\n");
    printf("Enter Your choice:");
    scanf("%c",&y);
    if(y=='a')
    {
	fflush(stdin);
	    printf("PRESS A: TO START THE GAME.\n");
	    printf("PRESS B: TO EXIT THE GAME\n");
	    printf("ENTER YOUR CHOICE:");
	    scanf("%c",&y);
	    switch(y)
	    {
		    case 'A':start();
		       break;
		    case 'B': xit();
			    break;

	    }
	    fflush(stdin);
	    system("COLOR 05");
	    printf("\n\t\t\t\t\tQUIZ GAME\n");
	    printf("\n\t\t\t\t\tTHRONE OF GLASS SERIES\n");
	    printf("Q1)What is Celaena's false name while she is competing to be the\nKing's Champion?\n");
	    printf("(a)Celaena Sardothien\n(b)Lillian Gordaina\n(c)Kaltain Rompier\n(c)Aelin Ashryver Galathynius\n");
	    printf("Enter  your choice:");
	    scanf("%c",&ans);
	    if(ans=='b'||ans=='c'||ans=='d')
	    {
		   printf("Your score is %d\n",count);
		   printf("\t\t\t\n\nThanks for playing the game\n");
		   printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		   getch();
		   exit(0);
	    }
	    else
	    {
		    fflush(stdin);
		count++;
		printf("\n\t\t\t\t\tTHRONE OF GLASS SERIES\n");
		printf("Q2)Which prospective champion does Celaena save from falling off of the climbing wall?\n");
		printf("(a)Herself\n(b)Cain\n(c)Dorian\n(d)Nox\n");
		printf("Enter your choice:");
		scanf("%c",&ans);
	    }

	if(ans<'d'||ans>'d')
	{
		printf("Your score is %d\n",count);
		printf("\t\t\t\n\nThanks for playing the game\n");
		printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		getch();
		exit(0);
	    }
	    else
	    {
	       fflush(stdin);
	       count++;
	       printf("\n\t\t\t\t\tTHRONE OF GLASS SERIES\n");
	       printf("Q3)What does Celaena name the puppy Dorian gives her?\n");
	       printf("(a)Fleetfoot\n(b)Kenio\n(c)Nehemia\n(d)Wanderer\n");
	       printf("Enter your choice:");
	       scanf("%c",&ans);
	    }
	    if(ans>'a')
	    {
		printf("Your score is %d\n",count);
		printf("\t\t\t\n\nThanks for playing the game\n");
		printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		getch();
		exit(0);
	    }
	    else
	    {
		fflush(stdin);
		count++;
		printf("\n\t\t\t\t\tTHRONE OF GLASS SERIES\n");
		printf("Q4)Who is viciously assassinated by Grave?\n");
	    printf("(a)Chaol\n(b)Dorian\n(c)The King\n(d)Nehemia\n");
	    printf("Enter your choice:");
	    scanf("%c",&ans);
	    }
	    if(ans>'d'||ans<'d')
	    {
		printf("Your score is %d\n",count);
		printf("\t\t\t\n\nThanks for playing the game\n");
		printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		getch();
		exit(0);
	    }
	    else
	    {
		fflush(stdin);
		count++;
		printf("\n\t\t\t\t\tTHRONE OF GLASS SERIES\n");
		printf("Q5)What does Chaol see Celaena doing at the grave of the person murdered?\n");
	    printf("(a)Weeping\n(b)Laughing\n(c)Singing\n(d)Dancing\n");
	    printf("Enter your choice:");
	    scanf("%c",&ans);
	    }
	    if(ans<'c'||ans>'c')
	{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
	    }
	    else
	    {
		printf("You have answered all the question.\n'");
		printf("Your score is %d\n",count);
		fflush(stdin);
		printf("Do you want to play other quiz?[Y(for yes)/N(for no)\n");
		scanf("%c",&x);
	    }
    }
	    if(y=='b')
	    {
		system("COLOR 06");
		printf("\nPRESS A: TO START THE GAME.\n");
		printf("PRESS B: TO KNOW ABOUT THE GAME.\n");
		printf("PRESS C: TO EXIT THE GAME\n");
		fflush(stdin);
		printf("ENTER YOUR CHOICE:");
		scanf("%c",&y);
	    switch(y)
		{
			case 'A':start();
		       break;
		    case 'B': xit();
			    break;
		}
		count=0;
		fflush(stdin);
		system("COLOR 05");
		printf("\n\t\t\t\t\tQUIZ GAME\n");
		printf("\n\t\t\t\t\tTHE HUNGER GAMES SERIES\n");
		printf("Q1)What is the name of the ceremony where tributes are chosen from each district?\n");
		printf("(a)THE SEAM\n(b)THE HUNGER GAMES\n(c)THE TREATY OF TREASON\n(d)THE REAPING\n");
		printf("Enter your choice:");
		scanf("%c",&ans);
		if(ans<'d'||ans>'d')
		{
			printf("Your score is %d\n",count);
			printf("\t\t\t\n\nThanks for playing the game\n");
			printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
			getch();
			exit(0);
		}
		else
		{
			fflush(stdin);
			count++;
			printf("\n\t\t\t\t\tTHE HUNGER GAMES SERIES\n");
			printf("Q2)What district is Katniss from?\n");
		    printf("(a)DISTRICT 2\n(b)DISTRICT 11\n(c)DISTRICT 4\n(d)DISTRICT 12\n");
		    printf("Enter your choice:");
		    scanf("%c",&ans);
		}
		if(ans<'d'||ans>'d')
		{
			printf("Your score is %d\n",count);
			printf("\t\t\t\n\nThanks for playing the game\n");
			printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
			getch();
			exit(0);
		    }
		    else
		    {
			fflush(stdin);
			count++;
			printf("\n\t\t\t\t\tTHE HUNGER GAMES SERIES\n");
			printf("Q3)What age does a child first have to enter the Hunger Games lottery?\n");
		    printf("(a)16\n(b)12\n(c)18\n(d)14\n)");
		    printf("Enter your choice:");
		    scanf("%c",&ans);
		    }
		if(ans>'a')
		{
			printf("Your score is %d\n",count);
			printf("\t\t\t\n\nThanks for playing the game\n");
			printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
			getch();
			exit(0);
		    }
		    else
		    {
			fflush(stdin);
			count++;
			printf("\n\t\t\t\t\tTHE HUNGER GAMES SERIES\n");
			printf("Q4)Who gives Katniss the mockingjay pin?\n");
			printf("(a)HER MOTHER\n(b)GALE\n(c)MADGE\n(d)PRIM\n");
			scanf("%c",&ans);
		    }
		    if(ans<'d'||ans>'d')
		    {
			printf("Your score is %d\n",count);
			printf("\t\t\t\n\nThanks for playing the game\n");
			printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
			getch();
			exit(0);
		    }
		    else
		    {
			fflush(stdin);
			count++;
			printf("\n\t\t\t\t\tTHE HUNGER GAMES SERIES\n");
			printf("Q5)During the training, who does Peeta say is their shadow?\n");
			printf("(a)RUE\n(b)GLIMMER\n(c)CATO\n(d)CLOVE\n");
			printf("Enter your choice:");
			scanf("%c",&ans);
		    }
		if(ans>'a')
		{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
		}
		else
		{
			fflush(stdin);
			    printf("You have answered all the question.\n'");
		    printf("Your score is %d\n",count);
		    fflush(stdin);
		    printf("Do you want to play other quiz?[Y(for yes)/N(for no)\n");
		    scanf("%c",&x);
		    }
	    }
	    if(y=='c')
	    {
		system("COLOR 06");
		printf("\nPRESS A: TO START THE GAME.\n");
		printf("PRESS B: TO EXIT THE GAME\n");
		fflush(stdin);
		printf("ENTER YOUR CHOICE:");
		scanf("%c",&y);
	    switch(y)
		{
			case 'A':start();
		       break;
		    case 'C': xit();
			    break;
		}
		count=0;
		fflush(stdin);
		system("COLOR 05");
		printf("\n\t\t\t\t\tQUIZ GAME\n");
		printf("\n\t\t\t\t\tTHE MAZE RUNNER SERIES\n");
		printf("Q1)What is one of the few things Thomas can remember when he enters the Glades?\n");
		printf("(a)His age\n(b)Images of people with smeared faces\n(c)The sound of his voice\n(d)His parents and friends\n");
		printf("Enter your choice:");
		scanf("%c",&ans);
		if(ans<'b'||ans>'b')
		{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
			count++;
			fflush(stdin);
			printf("\n\t\t\t\t\tTHE MAZE RUNNER SERIES\n");
			printf("Q2)What does the Glader word 'klunk' mean?\n");
			printf("(a)Idiot\n(b)A small animal\n(c)Poo\n(d)Rock\n");
			printf("Enter your choice:");
			scanf("%c",&ans);
			}
			if(ans<'c'||ans>'c')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
		else
		{
		    count++;
		    fflush(stdin);
		    printf("\n\t\t\t\t\tTHE MAZE RUNNER SERIES\n");
		    printf("Q3)In the Maze, how many quadrants are there?\n");
		printf("(a)Eight\n(b)Two\n(c)Nine\n(d)Four\n");
		printf("Enter your choice:");
		scanf("%c",&ans);
			}
			if(ans>'a')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
				 
		    count++;
		    fflush(stdin);
		    system("COLOR 05");
		    printf("\n\t\t\t\t\tTHE MAZE RUNNER SERIES\n");
		    printf("Q4)Which of these is NOT a job in the Glades?\n");
		    printf("(a)Med-jack\n(b)Slopper\n(c)Bagger\n(d)Chopper\n");
		    printf("Enter your choice:");
		    scanf("%c",&ans);
			}
			if(ans<'d'||ans>'d')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
				 
		    count++;
		    fflush(stdin);
		    printf("\n\t\t\t\t\tTHE MAZE RUNNER SERIES\n");
		    printf("Q5)What is the very first thing Thomas is called by the Gladers and what does it mean?\n");
		    printf("(a)Sticks - person\n(b)Greenie - new arrival to the Glade\n(c)Shank - fellow\n(d)Dong - poo\n");
		    printf("Enter your choice:");
		    scanf("%c",&ans);
			}
			if(ans>'c'||ans<'c')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
				 
				printf("You have answered all the question.\n'");
		    printf("Your score is %d\n",count);
		    fflush(stdin);
		    printf("Do you want to play other quiz?[Y(for yes)/N(for no)\n");
		    scanf("%c",&x);
			}

		}
		if(y=='d')
		{
			 
			system("COLOR 06");
		printf("PRESS A: TO START THE GAME.\n");
		printf("PRESS B: TO KNOW ABOUT THE GAME.\n");
		printf("PRESS C: TO EXIT THE GAME\n");
		fflush(stdin);
		printf("ENTER YOUR CHOICE:");
		scanf("%c",&y);
		switch(y)
		{
			case 'A':start();
		       break;
		       case 'B': xit();
			    break;
		}
		fflush(stdin);
		count=0;
		 
		system("COLOR 05");
		printf("\n\t\t\t\t\tQUIZ GAME\n");
		printf("\n\t\t\t\t\tRED QUEEN SERIES\n");
		printf("\nQ1)What is the birth order of mare and her siblings from oldest to youngest?\n");
		    printf("(a)Gisa,Mare,Shade,Tramy,Bree\t(b)Bree,Tramy,Shade,Mare,Gisa\n");
		    printf("(c)Tramy,Mare,Bree,Shades,Gisa\n");
			printf("Enter your choice:");
			scanf("%c",&ans);
			if(ans<'b'||ans>'b')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
				 
		    count++;
		    fflush(stdin);
		    printf("\n\t\t\t\t\tRED QUEEN SERIES\n");
		    printf("Q2)What color are Kilorn's eyes?\n");
			    printf("(a)Blue\n(b)Green\n");
			    printf("(c)Hazel\n");
			    printf("Enter your choice:");
			    scanf("%c",&ans);
			}
			if(ans<'b'||ans>'b')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
				 
		    count++;
		    fflush(stdin);
		    printf("\n\t\t\t\t\tRED QUEEN SERIES\n");
		    printf("Q3)Who is the main character in the series?\n");
		    printf("(a)Evangeline\n(b)Mare\n(c)Cal\n(d)Iris\n");
		    printf("Enter your choice:");
		    scanf("%c",&ans);
			}
			if(ans>'b'||ans<'b')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
				 
		    count++;
		    fflush(stdin);
		    printf("\n\t\t\t\t\tRED QUEEN SERIES\n");
		    printf("Q4)Who captures mare and keeps her in a prison?\n");
		    printf("(a)Cal\n(b)Julian\n(c)Kilorn\n(d)Maven\n");
		    printf("Enter your choice:");
		    scanf("%c",&ans);
			}
			if(ans>'d'||ans<'d')
			{
		    printf("Your score is %d\n",count);
		    printf("\t\t\t\n\nThanks for playing the game\n");
		    printf("\t\t\t\n\nPRESS ANY KEY TO EXIT");
		    getch();
		    exit(0);
			}
			else
			{
				 
				printf("You have answered all the question.\n'");
		    printf("Your score is %d",count);
		    fflush(stdin);
		    printf("Do you want to play other quiz?[Y(for yes)/N(for no)\n");
		    scanf("%c",&x);
			}
		}
 }
	while(x=='Y');
	printf("Thanks for playing.\n");
	    printf("Press any key to exit");
	getch();
	return 0;
}
