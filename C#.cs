using System;

class ProgramCsharp
{
    static void Main()
    {
        int reply = 0;       // input answer
        int answer = 18;     // correct answer
        int chance = 5;      // opportunity to repeat questions
        int loop = 0;        // start looping
        bool finish = false; // finished process boolean

        /*======== while loop ========*/
        while (reply != answer && !finish) { // if reply not equal to answer and not finish
            if (loop < chance) {
                Console.Write("The age limit for adults is: "); // question

                if (int.TryParse(Console.ReadLine(), out reply)) { // check input must be an integer
                    loop++;
                } else {
                    Console.WriteLine("You must use a number!");
                    return; // if not an integer, the process is terminated
                } // end check input
            } else {
                finish = true; // If loop has met the chance number, the process is terminated
            }
        }

        Console.WriteLine(); // line spacing

        if (!finish) {
            Console.WriteLine($"You win! Your answer: {answer}"); // true output
        } else {
            Console.WriteLine($"You lose! The answer is {answer}. Your final answer: {reply}"); // false output
        }

        Console.WriteLine(); // line spacing
    }
}
