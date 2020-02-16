<b><h2>Pratique 2 : Communication </h2></b>
<p>Dans cette partie, on s'interessera à la communication entre différents composants</p>
<h4>2.1. Développement du programme</h4>
<p>Dans le script ci-aprés, on cherche à développer un programme arduino qui peut lire une série d'octets et d'ajuster la fréquence du buzzer passif avec la série d'octets en question</p>
<br></br>
<h4>2.2. le code</h4>
'''byte buzzPin = 8;

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

}'''
<br/><br/>

<h4>2.3. Test physique du programme</h4>

<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/buzzerPassif.jpg"/>
 
 <h5>figure1: Connecter le buzzer à l'arduino</h5>
 
 <h4>2.3. Connectez le LDR à l'Arduino</h4>
 
 <p> Après avoir interconnecté l'arduino avec le LDR (Connecté à trois cables, l'un sur 5v, et les 2 autres respectivent sur A0 et GND des parties Power et Analog), un LED (connecté à deux cables au port 10 et au GND) et compilé le code1.ino, nous avons remarqué au niveau du moniteur série intégré une succession de traces suivant que le LED soit allumé ou éteind.<br/>
La trace "Its DARK, Turn on the LED:" marque que le LED est allumé, et celle "Son BRIGHT, éteignez la LED:" marque que le LED est éteind.</p><br/>
Nous allons illustrer notre expérience avec les images et vidéos ci-dessous : <br/>

 <h4>2.3.1. Connection du LDR à l'Arduino</h4>
<img src=""/> <br/><br/>
<h5> figure2 : Connection du LDR à l'Arduino <h5/> <br/><br/>
 <br></br>
 <h4>2.3.2. LED allumé</h4>
 <img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/LED%20allum%C3%A9.jpg"/>
<h5>figure 3 : LED allumé</h5> <br/><br/>

<h4>2.3.3. LED éteind</h4>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/LED%20eteind.jpg"/>
<h5>figure 4 : LED éteind</h5> <br/><br/>
 
 <h4>2.3.4. Trace de la valeur</h4>
 <img src=""/>
 <h5>figure 5: Trace de la valeur<h5/>
 
 <P> NB : Nous avons aussi remarqué que l'approche de la lumière de notre caméra éteind le LED, qui se rallume dès qu'on éloigne la caméra.</P>
 
 <h4>2.4. Sketch en fritzing</h4>
 <img src=""/>
<P> <P/>
 <h5> figure5: Sketch en fritzing <h5/>
