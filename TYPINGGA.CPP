
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define INT_MIN -2147483648
using namespace std;
int i,j,a,b,letter=0,score=0,E,frq=2000,y=11,y1=11;


class Queue
 {
public:
	int front, rear, size;
	unsigned capacity;
	int* array;
};


Queue* createQueue(unsigned capacity)
{
	Queue* queue = new Queue();
	queue->capacity = capacity;
	queue->front = queue->size = 0;
	queue->rear = capacity - 1;
	queue->array = new int[(
		queue->capacity * sizeof(int))];
	return queue;
}

int isFull(Queue* queue)
{
	return (queue->size == queue->capacity);
}


int isEmpty(Queue* queue)
{
	return (queue->size == 0);
}


void enqueue(Queue* queue, int item)
{
	if (isFull(queue))
		return;
	queue->rear = (queue->rear + 1)
				% queue->capacity;
	queue->array[queue->rear] = item;
	queue->size = queue->size + 1;

}

// Function to remove an item from queue.
// It changes front and size
int dequeue(Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	int item = queue->array[queue->front];
	queue->front = (queue->front + 1)
				% queue->capacity;
	queue->size = queue->size - 1;
	return item;
}

// Function to get front of queue
int front(Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->front];
}

// Function to get rear of queue
int rear(Queue* queue)
{
	if (isEmpty(queue))
		return INT_MIN;
	return queue->array[queue->rear];
}




void border()
{

//   textcolor(3);
 	system("color 3");

   for(i=2; i<=80; i++)
   {
     window(i,2,i+1,3);
     cprintf("Õ");
     window(1,2,2,3);
     cprintf("…");
     window(i,23,i+1,23);
     cprintf("Õ");
	window(1,23,2,24);
     cprintf("»");
   }
   for(i=3; i<=22; i++)
   {
   window(1,i,2,i+1);
   cprintf("∫");
    window(80,2,80,3);
     cprintf("ª");
    window(80,i,80,i+1);
   cprintf("∫");
    window(80,23,80,24);
     cprintf("º");
   }

}
void dat()
{
    struct date dt;
    getdate(&dt);
       textcolor(GREEN);
   for(i=58; i<=80; i++)
   {
     window(i,3,i+1,4);
     cprintf("Õ");
     window(58,3,61,4);
     cprintf("…");
     window(i,5,i+1,6);
     cprintf("Õ");
	window(58,5,61,6);
     cprintf("»");
   }
   for(i=4; i<=4; i++)
   {
   window(58,i,59,i+1);
   cprintf("∫");
    window(79,i-1,80,i+1);
     cprintf("ª");
    window(79,i,80,i+1);
   cprintf("∫");
    window(79,i+1,80,i+1);
     cprintf("º");
   }

    textcolor(15);
    window(60,4,80,4);
    cprintf("DATE = %dƒ%dƒ%d",dt.da_day,dt.da_mon,dt.da_year);

}
void typingname()
{

  textcolor(1);
  for(i=5; i<=55; i++)
   {
     window(i,3,i+1,4);
     cprintf("Õ");
     window(4,3,11,4);
     cprintf("…");
     window(i,5,i+1,6);
     cprintf("Õ");
	window(4,5,11,6);
     cprintf("»");
   }
   for(i=4; i<=4; i++)
   {
   window(4,i,11,i+1);
   cprintf("∫");
    window(55,i-1,56,i+1);
     cprintf("ª");
    window(55,i,56,i+1);
   cprintf("∫");
    window(55,i+1,56,i+1);
     cprintf("º");
   }

   window(10,4,56,4);
   textcolor(15);
   cprintf("  T  Y  P  I  N  G      G  A  M  E");
}
void home()
{
   textcolor(7);
   for(j=0; j<12; j+=3)
   {

 for(i=30; i<=45; i++)
   {
     window(i,10+j,i+1,11+j);
     cprintf("Õ");
     window(29,10+j,30,11+j);
     cprintf("…");
     window(i,12+j,i+1,13+j);
     cprintf("Õ");
	window(29,12+j,30,13+j);
     cprintf("»");
   }
   for(i=11+j; i<=11+j; i++)
   {
   window(29,i,30,i+1);
   cprintf("∫");
    window(45,i-1,46,i+1);
     cprintf("ª");
    window(45,i,46,i+1);
   cprintf("∫");
    window(45,i+1,46,i+1);
     cprintf("º");
   }
   }
  textcolor(3);
  window(28,y,30,y+1);
  cprintf("%c",16);

  textcolor(3);
  window(46,y,48,y+1);
  cprintf("%c",17);
   textcolor(14);
   window(33,11,50,12);
   cprintf("P ");
   textcolor(15);
   window(35,11,50,12);
   cprintf("L A Y");
     textcolor(2);
   window(33,14,50,15);
   cprintf("A ");
   textcolor(15);
   window(35,14,50,15);
   cprintf("B O U T");
     textcolor(1);
	textcolor(LIGHTCYAN);
   window(33,17,50,18);
   cprintf("S ");
   textcolor(7);
   window(34,17,50,18);
   cprintf(" O U N D");
      textcolor(6);
   window(33,20,50,21);
   cprintf("Q");
   textcolor(7);
   window(34,20,50,21);
   cprintf(" U I T");

}
void play()
{


   textcolor(7);
   for(j=0; j<9; j+=3)
   {

 for(i=30; i<=45; i++)
   {
     window(i,10+j,i+1,11+j);
     cprintf("Õ");
     window(29,10+j,30,11+j);
     cprintf("…");
     window(i,12+j,i+1,13+j);
     cprintf("Õ");
	window(29,12+j,30,13+j);
     cprintf("»");
   }
   for(i=11+j; i<=11+j; i++)
   {
   window(29,i,30,i+1);
   cprintf("∫");
    window(45,i-1,46,i+1);
     cprintf("ª");
    window(45,i,46,i+1);
   cprintf("∫");
    window(45,i+1,46,i+1);
     cprintf("º");
   }
   }

  textcolor(3);
  window(28,y1,30,y1+1);
  cprintf("%c",16);

  textcolor(3);
  window(46,y1,48,y1+1);
  cprintf("%c",17);
   textcolor(2);
   window(32,11,50,12);
   cprintf("S ");
   textcolor(7);
   window(33,11,50,12);
   cprintf(" M A L L");
     textcolor(3);
   window(31,14,50,15);
   cprintf("C");
   textcolor(7);
   window(32,14,50,15);
   cprintf(" A P I T A L");
     textcolor(1);
   window(33,17,50,18);
   cprintf("B");
   textcolor(7);
   window(34,17,50,18);
   cprintf(" A C K");




}
void theme()
{
  int x1=2,y1=3,x2=79,y2=8,color2=2,color3=7;
window(x1,y1,x2,y2);
   window(x1,8,x2,9);
   for(i=x1; i<=x2; i++)
   {
   textbackground(0);
      textcolor(color2);
      cprintf("‹");
   }
  window(x1,9,x2,16);
    for(i=1; i<=9; i++)
    {
	 for(j=1; j<=80; j++)
	 {

	  textbackground(color3);
	  cprintf(" ");
	 }
     }
     window(x1,16,x2,17);
       for(i=1; i<=78; i++)
   {
      textcolor(color2);
      cprintf("‹");
   }

}
void keysound()
{
 sound(frq);
 delay(100);
 nosound();

}



void small()
{
  score=0;
  letter=0;
  Queue* queue=createQueue(50);
  for(int pos=0; pos<50; pos++)
  {
    again:
    int character=rand()%26+97;

    enqueue(queue, character);


  }
  label1:
  theme();
   for(i=3; i<=80; i+=3)
   {

	repeat:

		textbackground(0);
		textcolor(3);

		 for(j=10; j<=35; j++)
		 {

			window(j,20,j+1,21);
			cprintf("Õ");
			window(10,20,11,22);
			 cprintf("…");
			window(j,22,j+1,23);
			cprintf("Õ");
			window(10,22,11,23);
			cprintf("»");
		  }
		  for(j=21; j<=21; j++)
		{
			window(10,j,11,j+1);
			 cprintf("∫");
			 window(35,j-1,36,j+1);
			 cprintf("ª");
			 window(35,j,36,j+1);
			 cprintf("∫");
			 window(35,j+1,36,j+1);
			 cprintf("º");
		}


	  window(11,21,35,22);

	   textcolor(2);
	   textbackground(0);

	   cprintf("Score = %d ≥ Wrong = %d",score,letter);


	 a=dequeue(queue);

	 textbackground(15);
	 if(a>=97)
	 {
	   keysound();

	 window(i,13,i+3,13);
	 textbackground(7);
	 textcolor(0);

	  cprintf("%c",a);
	   b=getch();
	   if(b==a)
	   {
	     score++;

	 window(i,13,i+3,13);
	 textcolor(1);

	  cprintf("%c",a);

	   }

	   else
	   {
	      letter++;

	     window(i,13,i+3,13);
	 textcolor(4);

	  cprintf("%c",a);

	   }
	   if(i>73)
	   {
	    goto label1;
	   }

	}
	else if(score+letter>49)
	{

	   system("cls");
	    textbackground(0);
	   border();
	   typingname();
	   dat();

	textcolor(7);
	for(j=0; j<9; j+=3)
	{

	 for(i=25; i<=46; i++)
	{
	window(i,10+j,i+1,11+j);
	 cprintf("Õ");
	 window(24,10+j,30,11+j);
	cprintf("…");
	 window(i,12+j,i+1,13+j);
	cprintf("Õ");
	window(24,12+j,30,13+j);
	cprintf("»");
	 }
	  for(i=11+j; i<=11+j; i++)
	{
	window(24,i,30,i+1);
	cprintf("∫");
	window(46,i-1,48,i+1);
	cprintf("ª");
	window(46,i,48,i+1);
	cprintf("∫");
	window(46,i+1,48,i+1);
	cprintf("º");
   }
   }

   textcolor(14);
   _setcursortype(_NOCURSOR);
   window(26,11,44,12);
   cprintf("Score        =");
   textcolor(15);
   window(42,11,50,12);
   cprintf("%d",score);
     textcolor(LIGHTRED);
   window(26,14,44,15);
   cprintf("Wrong letter =");
   textcolor(15);
   window(42,14,50,15);
   cprintf("%d",letter);
     textcolor(2);
   window(26,17,44,18);
   cprintf("Accurcy      =");
   textcolor(15);
   window(40,17,50,18);
   cprintf(" %d %",((score)*2));

       getch();
	break;

	}


	else
	{
	goto repeat;
	}
   }

}

void capital()
{
  score=0;
  letter=0;
  Queue* queue=createQueue(50);
  for(int pos=0; pos<50; pos++)
  {
    int character=rand()%26+65;
    enqueue(queue, character);


  }
  label1:
  theme();
   for(i=3; i<=80; i+=3)
   {

	repeat:

		textbackground(0);
		textcolor(3);
		 for(j=10; j<=35; j++)
		 {

			window(j,20,j+1,21);
			cprintf("Õ");
			window(10,20,11,22);
			 cprintf("…");
			window(j,22,j+1,23);
			cprintf("Õ");
			window(10,22,11,23);
			cprintf("»");
		  }
		  for(j=21; j<=21; j++)
		{
			window(10,j,11,j+1);
			 cprintf("∫");
			 window(35,j-1,36,j+1);
			 cprintf("ª");
			 window(35,j,36,j+1);
			 cprintf("∫");
			 window(35,j+1,36,j+1);
			 cprintf("º");
		}

	  window(11,21,35,22);

	   textcolor(2);
	   textbackground(0);
	   cprintf("Score = %d ≥ Wrong = %d",score,letter);

	 a=dequeue(queue);

	 textbackground(15);
	 if(a>=65)
	 {
	   keysound();

	 window(i,13,i+3,13);
	 textbackground(7);
	 textcolor(0);

	  cprintf("%c",a);
	   b=getch();
	   if(b==a)
	   {
	     score++;

	 window(i,13,i+3,13);
	 textcolor(1);

	  cprintf("%c",a);

	   }

	   else
	   {
	      letter++;

	     window(i,13,i+3,13);
	 textcolor(4);

	  cprintf("%c",a);

	   }
	   if(i>73)
	   {
	    goto label1;
	   }

	}
	else if(score+letter>49)
	{

	   system("cls");
	    textbackground(0);
	   border();
	   typingname();
	   dat();

	textcolor(7);
	for(j=0; j<9; j+=3)
	{

	 for(i=25; i<=46; i++)
	{
	window(i,10+j,i+1,11+j);
	 cprintf("Õ");
	 window(24,10+j,30,11+j);
	cprintf("…");
	 window(i,12+j,i+1,13+j);
	cprintf("Õ");
	window(24,12+j,30,13+j);
	cprintf("»");
	 }
	  for(i=11+j; i<=11+j; i++)
	{
	window(24,i,30,i+1);
	cprintf("∫");
	window(46,i-1,48,i+1);
	cprintf("ª");
	window(46,i,48,i+1);
	cprintf("∫");
	window(46,i+1,48,i+1);
	cprintf("º");
   }
   }

   textcolor(14);
   _setcursortype(_NOCURSOR);
   window(26,11,44,12);
   cprintf("Score        =");
   textcolor(15);
   window(42,11,50,12);
   cprintf("%d",score);
     textcolor(LIGHTRED);
   window(26,14,44,15);
   cprintf("Wrong letter =");
   textcolor(15);
   window(42,14,50,15);
   cprintf("%d",letter);
     textcolor(2);
   window(26,17,44,18);
   cprintf("Accurcy      =");
   textcolor(15);
   window(40,17,50,18);
   cprintf(" %d %",((score)*2));

       getch();
	break;

	}


	else
	{
	goto repeat;
	}
   }

}

void   about()

{


   textcolor(7);
   for(j=0; j<3; j+=3)
   {

 for(i=30; i<=45; i++)
   {
     window(i,7+j,i+1,8+j);
     cprintf("Õ");
     window(29,7+j,30,8+j);
     cprintf("…");
     window(i,9+j,i+1,10+j);
     cprintf("Õ");
	window(29,9+j,30,10+j);
     cprintf("»");
   }
   for(i=8+j; i<=8+j; i++)
   {
   window(29,i,30,i+1);
   cprintf("∫");
    window(45,i-1,46,i+1);
     cprintf("ª");
    window(45,i,46,i+1);
   cprintf("∫");
    window(45,i+1,46,i+1);
     cprintf("º");
   }
   }
  window(30,8,50,9);
  textcolor(3);
  cprintf(" %c A B O U T %c",16,17);

   textcolor(7);
   for(i=10; i<=70; i++)
   {
     window(i,10,i+1,11);
     cprintf("Õ");
     window(10,10,11,11);
     cprintf("…");
     window(i,19,i+1,20);
     cprintf("Õ");
	window(10,19,11,20);
     cprintf("»");
   }
   for(i=11; i<=18; i++)
   {
   window(10,i,11,i+1);
   cprintf("∫");
    window(70,10,71,11);
     cprintf("ª");
    window(70,i,71,i+1);
   cprintf("∫");
    window(70,19,71,20);
     cprintf("º");
   }
   window(12,12,30,13);
   textcolor(7);
   cprintf("Developer    :");
    window(30,12,70,13);
   textcolor(3);
   cprintf("Ajaysinh Rathod");

    window(12,14,25,15);
   textcolor(7);
   cprintf("Insta id     :");
    window(30,14,70,15);
   textcolor(3);
   cprintf("ll_ajay.rathod_ll");
    window(12,15,25,16);
   textcolor(7);
   cprintf("Facebook id  :");
    window(30,15,70,16);
   textcolor(3);
   cprintf("Ajay Sinh Rathod");
     window(12,16,25,17);
   textcolor(7);
   cprintf("Gmail id     :");
    window(30,16,70,17);
   textcolor(3);
   cprintf("ajaysinhrathod1290@gmail.com");

       window(49,18,70,19);
   textcolor(2);
   cprintf("version 1.1");



}
void soundoption()
{


   textcolor(7);
   for(j=0; j<9; j+=3)
   {

 for(i=30; i<=45; i++)
   {
     window(i,10+j,i+1,11+j);
     cprintf("Õ");
     window(29,10+j,30,11+j);
     cprintf("…");
     window(i,12+j,i+1,13+j);
     cprintf("Õ");
	window(29,12+j,30,13+j);
     cprintf("»");
   }
   for(i=11+j; i<=11+j; i++)
   {
   window(29,i,30,i+1);
   cprintf("∫");
    window(45,i-1,46,i+1);
     cprintf("ª");
    window(45,i,46,i+1);
   cprintf("∫");
    window(45,i+1,46,i+1);
     cprintf("º");
   }
   }

   textcolor(14);
   window(32,11,50,12);
   cprintf("S ");
   textcolor(15);
   window(34,11,50,12);
   cprintf("O U N D");
     textcolor(2);
   window(30,14,50,15);
   cprintf(" N ");
   textcolor(15);
   window(32,14,50,15);
   cprintf(" O S O U N D");
       textcolor(1);
   window(33,17,50,18);
   cprintf("B");
   textcolor(7);
   window(34,17,50,18);
   cprintf(" A C K");




}
void loading()
{

    for(i=2,j=1; j<=100; i+=2,j++)
    {
    clrscr();
      textcolor(3);
      window(76,21,80,23);
      cprintf("%d%",j);
    textcolor(LIGHTGREEN);
    if(i>67)
    {
     i=2;

    }

     window(2,21,20,22);
     textcolor(2);

     cprintf("Loading...");
      textcolor(2);
      window(i,22,i+12,22);
      cprintf("‹‹‹‹‹‹‹");
      delay(70);
 }
    delay(500);

}
void main()
{
    int S,H,k;
     system("cls");
      _setcursortype(_NOCURSOR);
   textbackground(0);
   border();
   loading();
   start:
   system("cls");
    _setcursortype(_NOCURSOR);
   textbackground(0);
   typingname();
   border();
   dat();

   home();
    S=getch();
    keysound();
    if(S=='p'||S=='P')
    {

     goto play;
    }
    else if(S=='a'||S=='A')
    {
     goto about;
    }
    else if(S=='s'||S=='S')
	{
	 goto keysound;
	}
    else if(S=='q'||S=='Q')
    {
     exit(0);

    }
    else if(S==0)
    {
	S=getch();
	if(S==80)
	{

	  y+=3;
	  if(y==23)
	  {
	      y=11;
	  }
	  goto start;
	}

	else if(S==72)
	{

	  y-=3;
	  if(y<11)
	  {
	      y=20;
	  }
	  goto start;
	}
    }
	else if(S==' ')
	{

	  y+=3;
	  if(y==23)
	  {
	      y=11;
	  }
	  goto start;
	}

	else if(S==8)
	{

	  y-=3;
	  if(y<11)
	  {
	      y=20;
	  }
	  goto start;
	}
    else
    {
     goto start;
    }
    play:
	    system("cls");
	     _setcursortype(_NOCURSOR);
	    border();
	    dat();
	    typingname();


	   play();
	     H=getch();
	 keysound();
	 if(H=='s'||H=='S')
	{

	 goto  small;
	}
	else if(H=='c'||H=='C')
	{
	goto capital;
	}

	else if(H=='B'||H=='b')
	{
	goto start;
	}

	else if(H==' ')
	{

	  y1+=3;
	  if(y1==20)
	  {
	      y1=11;
	  }
	  goto play;

	}

	else if(H==8)
	{

	  y1-=3;
	  if(y1<11)
	  {
	      y1=17;
	  }
	  goto start;
	}
	else if(H==0)
	{
	H=getch();
	    if(H==80)
	{

	  y1+=3;
	  if(y1==20)
	  {
	      y1=11;
	  }
	  goto play;

	}

	else if(H==72)
	{

	  y1-=3;
	  if(y1<11)
	  {
	      y1=17;
	  }
	  goto play;
	}
	else
	{

	 goto start;
	}
	}
	else
	{
	goto play;
	}
	small:

	    system("cls");
	     _setcursortype(_NOCURSOR);
	    border();
	    dat();
	    typingname();
	    theme();
	     small();
	      goto start;

       capital:

	    system("cls");
	     _setcursortype(_NOCURSOR);
	    border();
	     dat();
	    typingname();
	    theme();
	    capital();
	    goto start;
    about:

	    system("cls");
	     _setcursortype(_NOCURSOR);
	    border();
	     dat();
	    typingname();

	    about();
	   getch();
	    goto start;
    keysound:
	    system("cls");
	     _setcursortype(_NOCURSOR);
	    if(frq==2000)
	    {

	     textcolor(2);
	      window(27,11,50,12);
	     cprintf("%c",14);
	    }
	    else
	    {


	     textcolor(2);
	      window(27,14,50,15);
	     cprintf("%c",14);
	    }
	    border();
	     dat();
	    typingname();

	    soundoption();
	     k=getch();
	     keysound();
	    if(k=='s'||k=='S')
	    {
	     frq=2000;


	      goto keysound;
	    }
	    else if(k=='n'||k=='N')
	    {
	     frq=0;
	     goto keysound;

	    }
	    else if(k=='b'||k=='B')
	    {
	     goto start;
	    }
	    else
	    {
	    goto keysound;
	    }


}
