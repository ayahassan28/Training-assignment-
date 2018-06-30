//Control led by switch & reading temperature sensor
//for components guide check the README file

const int led=13;          //led output pin
const int switchpin=2;     //switch input pin
volatile byte state = LOW; //bolean variable to check the led state


float voltage,degreesC;
int adc;
int high = 0; //variable to check if state is high or low and take actions in main loop


void setup() {
pinMode(led, OUTPUT); //led pin 13 output
pinMode(switchpin, INPUT_PULLUP); //switch pin 2 input and activate pullup resistor
attachInterrupt(digitalPinToInterrupt(switchpin), onoff, CHANGE); //interrupt function on switchpin mode activate when a change happens to switch state
Serial.begin(9600); //Start the serial connection with the computer
                       //to view the result open the serial monitor 
}

void loop() {

temp(); //call temp function 

//print state of led if switch is pressed
if(high == 1){
  Serial.println("pressed");
  Serial.println("LED ON");
  high=0;
  }
}

//interrupt function
void onoff() {
 //invert  state when any change happens to the switch  
  state=!state;
 digitalWrite(led, state);
 if(state == HIGH){
  high = 1;
  }
}

void temp(){
adc = analogRead(A0);  //getting the voltage reading from the temperature sensor

// converting that reading to voltage, for 3.3v arduino use 3.3
voltage = (adc/1024.0)*5000;
degreesC = voltage /10;

                                                                                                                                             
//send temperature degree to serial monitor every 3 seconds  
Serial.print("TEMPERATURE DEGREE IS =  ");
Serial.println(degreesC);
delay(3000);

  }
