#include<stdio.h>

int main()
{
	/*======== variables ========*/
	int reply;           // input answer
	int answer = 18;     // correct answer
	int chance = 5;      // opportunity to repeat questions
	int loop = 0;        // start looping
	bool finish = false; // finished process boolean
	
	
	/*======== while loop ========*/
	while(reply != answer && !finish){ // if reply not equal to answer and not finish
		if(loop < chance){ // start loop according to the chance number
			printf("The age limit for adults is: "); // question
			
		    if(scanf("%d", &reply)) { // check input must be an integer
			    loop++;
		    } else {
			    printf("\n");
			    printf("You must use number!\n");
			    return 0; // if not an integer, the process is terminated
		    } // end check input
		} else {
			finish = true; // If loop has met the chance number, the process is terminated
		}
	}
	
	printf("\n"); // line spacing

	if(!finish){
		printf("You win! Your answer: %d", answer); // if true output
	} else {
		printf("You lose! The answer is %d. Your final answer: %d", answer, reply); // false output
	}
	
	printf("\n"); // line spacing
	
	return 0;
}