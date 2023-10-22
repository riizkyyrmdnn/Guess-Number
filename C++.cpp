#include<iostream>

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
		if(loop < chance){
			std::cout << "The age limit for adults is: "; // question
			
		    if(std::cin >> reply) { // check input must be an integer
			    loop++;
		    } else {
			    std::cout << std::endl; // line spacing
			    std::cout << "You must use number!\n";
			    return 0; // if not an integer, the process is terminated
		    } // end check input
		} else {
			finish = true; // If loop has met the chance number, the process is terminated
		}
	}
	
	std::cout << std::endl; // line spacing

	if(!finish){
		std::cout << "You win! Your answer: " << answer; // if true output
	} else {
		std::cout << "You lose! The answer is " << answer << " Your final answer: " << reply; // false output
	}
	
	std::cout << std::endl; // line spacing
	
	return 0;
}