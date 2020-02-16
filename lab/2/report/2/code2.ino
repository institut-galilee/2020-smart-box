const int ledPin  =  10 ; 
const int ldrPin = A0 ;
void setup () {
  Serial.begin ( 9600 ) ;
  pinMode ( ledPin, OUTPUT ) ;
  pinMode ( ldrPin, INPUT ) ;
  } 

void loop () { 
  int ldrStatus = analogRead ( ldrPin ) ;
  if (ldrStatus <= 200) 
  {
      digitalWrite (ledPin, HIGH ) ; 
      Serial.print ( "Its DARK, Turn on the LED:" ) ;
      Serial.println ( ldrStatus ) ; 
   } else { 
       digitalWrite ( ledPin, LOW ) ;
       Serial.print ( "Son BRIGHT, éteignez la LED:" ) ;
       Serial.println ( ldrStatus ) ; 
     } 
}
