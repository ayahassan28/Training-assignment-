# Table of Contents
* [what i want to do in this example](#what i want to do in this example)
* [Thought Process](#Thought Process )
* [Thought Process](#Thought Process )
* [Notes](#Notes )



# <a name="what i want to do in this example"></a>what i want to do in this example
* I try to control the led using interrupts instead of polling as it is more efficient. 
* Solve the Switch BOUNCING problem using a simple RC circuit .
* Read the temperature sensor value and convert it to the temperature actual reading by a simple well known equation .
* I try to make the code as simple as i can to make it readable .

<hr>

# <a name="Thought Process"></a>Thought Process.
* I thought first to use a simple if statement in the main loop to check the switch condition but the instructions said 
that this process should be continues so it wouldn't make any sense to keep the main loop busy asking over and over 
about the switch condition .
* Second thought was to choose the interrupt and it is the best way of course .
* Interrups will not disturb the microcontroller unless a change happen to the switch .
* Switch bouncing problem maybe easy to be solved in software but RC circuit is not very difficult to use .
* Temperature function was straight forward i only searched for the formula of the equation .

<hr>


# <a name="Notes"></a>Notes.
* this example is simple so i didn't face a real problem with it .
* i'm familier with arduino and c programming for 4 years now so i'm not a beginner but i'm not a professional as well .

 
