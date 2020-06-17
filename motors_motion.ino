int LM  = 3;  // Left motors (ENA)
int LMF = 4;  // Left motors Forward (IN1)
int LMB = 5;  // Left motors Backward (IN2)
int RMB = 6;  // Right motors Backward (IN3)
int RMF = 7;  // Right motors Forward (IN4)
int RM  = 9;  // Right motors (ENB)


void setup() {
  // set of all the motor control pins to outputs
  pinMode (LM,  OUTPUT);
  pinMode (LMF, OUTPUT);
  pinMode (LMB, OUTPUT);
  pinMode (RMB, OUTPUT);
  pinMode (RMF, OUTPUT);
  pinMode (RM,  OUTPUT);
  

}

// Function to make the robot move forward for 5 seconds
void forward()
{
  analogWrite (LM, 255); 
  analogWrite (RM, 255);

  analogWrite (LMF, 255);
  analogWrite (LMB,   0);
  analogWrite (RMB,   0);
  analogWrite (RMF, 255);
  delay(5000);
}

//Function to make the robot move backward for 5 seconds
void backward()
{
  analogWrite (LM, 255); 
  analogWrite (RM, 255);

  analogWrite (LMF,   0);
  analogWrite (LMB, 255);
  analogWrite (RMB, 255);
  analogWrite (RMF,   0);
}
void loop() {
  // put your main code here, to run repeatedly:

  // robot is moving forward 
  forward();
  delay(1000);
  // robot is moving backward
  backward();
  delay(1000);

}
