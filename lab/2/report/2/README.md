# Pratique 2 : Communication

Dans cette partie, on s'interessera à la communication entre différents composants

## Développement du programme

Dans le script ci-aprés, on cherche à développer un programme arduino qui peut lire une série d'octets et d'ajuster la fréquence du buzzer passif avec la série d'octets en question

### **Le code1.ino**
```INO
byte buzzPin = 8;

void setup() {
  // put your setup code here, to run once:
    pinMode(buzzPin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
  while (Serial.available() > 0) {
    int i  = Serial.parseInt();
    byte val  = Serial.read();
    Serial.println(val);
    tone(buzzPin,val);
    delay(100);
  }

}
```

## Test physique du programme

<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/buzzerPassif.jpg"/>
 
 <h5>figure1: Connecter le buzzer à l'arduino</h5>
 
 ### Connection du LDR à l'Arduino
 
 Après avoir interconnecté l'arduino avec le LDR (Connecté à trois cables, l'un sur 5v, et les 2 autres respectivent sur A0 et GND des parties Power et Analog), un LED (connecté à deux cables au port 10 et au GND) et compilé le code1.ino, nous avons remarqué au niveau du moniteur série intégré une succession de traces suivant que le LED soit allumé ou éteind.
La trace "Its DARK, Turn on the LED:" marque que le LED est allumé, et celle "Son BRIGHT, éteignez la LED:" marque que le LED est éteind.
Nous allons illustrer notre expérience avec les images et les vidéos ci-dessous :

### **le code2.ino**
```INO
const int ledPin  =  10 ; 
const int ldrPin = A0 ;
void setup () {
  Serial.begin (9600) ;
  pinMode ( ledPin, OUTPUT ) ;
  pinMode ( ldrPin, INPUT ) ;
  } 

void loop () { 
  int ldrStatus = analogRead ( ldrPin ) ;
  if (ldrStatus <= 200) 
  {
      digitalWrite (ledPin, HIGH ) ; 
      Serial.println ( ldrStatus ) ; 
   } else { 
       digitalWrite ( ledPin, LOW ) ;
       Serial.println ( ldrStatus ) ; 
     } 
}
```
<br/><br/>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/sketch.jpeg"/> <br/><br/>
<h5> figure2 : Connection du LDR à l'Arduino <h5/> <br/><br/>

 #### Connection LDR et Arduino avec LED allumé
 <img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/LED%20allum%C3%A9.jpg"/>
<h5>figure 3 : LED allumé</h5> <br/><br/>

#### Connection LDR et Arduino avec LED éteind
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/LED%20eteind.jpg"/>
<h5>figure 4 : LED éteind</h5> <br/><br/>
 
#### Trace de la valeur
 <img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/Trace_chiffre.PNG"/><br/><br/>
 <img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/Traceur_graphe.PNG"/><br/><br/>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/image.jpeg"><br/><br/>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/image_1.jpeg"><br/><br/>
Video 1
<video>
  <source src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/vd%C3%A9o_1.mp4" type="video/mp4">
</video>
  <br/><br/>
  
  Video 2
<video>
  <source src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/vid%C3%A9o.mp4" type="video/mp4">
</video>
  
 <h5>figure 5: Trace de la valeur<h5/> <br/><br/>
 
 <P> NB : Nous avons aussi remarqué que l'approche de la lumière de notre caméra éteind le LED, qui se rallume dès qu'on éloigne la caméra.</P>
 
 
