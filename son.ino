#include <NewPing.h>

#define MAX_DISTANCE 500

#define TRIGGER_PIN  8  
#define ECHO_PIN     9
 
#define TRIGGER_PIN1  10  
#define ECHO_PIN1     11

#define TRIGGER_PIN2 2
#define ECHO_PIN2 3

#define TRIGGER_PIN3 5
#define ECHO_PIN3 6






int height = 134.5;

int Buzzer = 12;
int Buzzer1 = 13;
int Buzzer2 = 4;
int Buzzer3 = 7; 
int val=0;
int val1=0;
int val2=0;
int val3=0;
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
NewPing sonar1(TRIGGER_PIN1, ECHO_PIN1, MAX_DISTANCE);
NewPing sonar2(TRIGGER_PIN2, ECHO_PIN2, MAX_DISTANCE);
NewPing sonar3(TRIGGER_PIN3, ECHO_PIN3, MAX_DISTANCE);



void setup()
{
  
  pinMode(Buzzer,OUTPUT); 
  pinMode(Buzzer1,OUTPUT);
  pinMode(Buzzer2,OUTPUT);
  pinMode(Buzzer3,OUTPUT);
}

void loop()
{
  delay(50); 
  
  val=sonar.ping_cm();
  val1 =sonar1.ping_cm();
  val2 =sonar2.ping_cm();
  val3 =sonar3.ping_cm();
 
 
 //=========================================================================================================================================PITHOLE AND STEP DETECTION
  if(val<=height && val>=height-15)
  {
    
    digitalWrite(Buzzer, LOW);  
    
 
   
  }
  else if(val> height)
  {
  digitalWrite(Buzzer, HIGH);   
  delay(40);
  digitalWrite(Buzzer, LOW);
  delay(40);
  digitalWrite(Buzzer, HIGH);   
  delay(40);
  digitalWrite(Buzzer, LOW);
  delay(40);
  digitalWrite(Buzzer, HIGH);   
  delay(40);
  digitalWrite(Buzzer, LOW);
  delay(40);
  digitalWrite(Buzzer, HIGH);   
  delay(40);
  digitalWrite(Buzzer, LOW);
  delay(40);
  
  
  }

  else if(val<height-15)
  {
    digitalWrite(Buzzer, HIGH);

  }

//=================================================================================================================================================FRONT SENSOR
    if(val1<=10&&val1>0)
  {
    
   digitalWrite(Buzzer1, HIGH);   
   }
  else if(val1<=25&&val1>10)
  {
  digitalWrite(Buzzer1, HIGH);
  delay(50);               
  digitalWrite(Buzzer1, LOW);
  delay(50);
 
  }
  else if(val1<=50&&val1>25)
  {
  digitalWrite(Buzzer1, HIGH); 
  delay(75);               
  digitalWrite(Buzzer1, LOW);    
  delay(75);               

}
    else if(val1<=75&&val1>50)
  {
  digitalWrite(Buzzer1, HIGH);  
  delay(100);               
  digitalWrite(Buzzer1, LOW);    
  delay(100); 

  }
    else if(val1<=100&&val1>75)
  {
  digitalWrite(Buzzer1, HIGH);
  delay(200);
  digitalWrite(Buzzer1, LOW);
  delay(200); 

  }
 
      else if(val1<MAX_DISTANCE)
  {
            
  digitalWrite(Buzzer1, LOW);
  
  }

  //============================================================================================================================================LEFT SENSOR

  if(val2<=10&&val2>0)
  {
    
   digitalWrite(Buzzer2, HIGH);   
   }
  else if(val2<=25&&val2>10)
  {
  digitalWrite(Buzzer2, HIGH);
  delay(50);               
  digitalWrite(Buzzer2, LOW);
  delay(50);
 
  }
  else if(val2<=50&&val2>25)
  {
  digitalWrite(Buzzer2, HIGH); 
  delay(75);               
  digitalWrite(Buzzer2, LOW);    
  delay(75);               

}
    else if(val2<=75&&val2>50)
  {
  digitalWrite(Buzzer2, HIGH);  
  delay(100);               
  digitalWrite(Buzzer2, LOW);    
  delay(100); 

  }
    else if(val2<=100&&val2>75)
  {
  digitalWrite(Buzzer2, HIGH);
  delay(200);
  digitalWrite(Buzzer2, LOW);
  delay(200); 

  }
 
      else if(val2<MAX_DISTANCE)
  {
            
  digitalWrite(Buzzer2, LOW);
  
  }

  //====================================================================================================================================RIGHT SENSOR

    if(val3<=10&&val3>0)
  {
    
   digitalWrite(Buzzer3, HIGH);   
   }
  else if(val3<=25&&val3>10)
  {
  digitalWrite(Buzzer3, HIGH);
  delay(50);               
  digitalWrite(Buzzer3, LOW);
  delay(50);
 
  }
  else if(val3<=50&&val3>25)
  {
  digitalWrite(Buzzer3, HIGH); 
  delay(75);               
  digitalWrite(Buzzer3, LOW);    
  delay(75);               

}
    else if(val3<=75&&val3>50)
  {
  digitalWrite(Buzzer3, HIGH);  
  delay(100);               
  digitalWrite(Buzzer3, LOW);    
  delay(100); 

  }
    else if(val3<=100&&val3>75)
  {
  digitalWrite(Buzzer3, HIGH);
  delay(200);
  digitalWrite(Buzzer3, LOW);
  delay(200); 

  }
 
      else if(val3<MAX_DISTANCE)
  {
            
  digitalWrite(Buzzer3, LOW);
  
  }
  
  
  }
 
 
