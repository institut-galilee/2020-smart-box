<b><h2>Pratique 2 : Communication </h2></b>
<h4>2.1. Développement du programme</h4>
<p>Dans le script ci-aprés, on cherche à développer un programme arduino qui peut lire une série d'octets et d'ajuster la fréquence du buzzer passif avec la série d'octets en question</p>

<h4>2.2. Test physique du programme</h4>
<p>Une fois que le LDR soit connecté à l'Arduino, on a envoyé une valeur à l'ordinateur à l'aide du serial et puis on l'a tracée.</p>
<p>Comme indiqué dans les figures ci-aprés</p>
<img src="https://github.com/institut-galilee/2020-smart-box/blob/master/lab/2/report/2/buzzerPassif.jpg"/>
 
 <h5>figure3: Connecter le buzzer à l'arduino<h5/>
 
 <h4>2.3. Connectez le LDR à l'Arduino</h4>
 
 <p> Après avoir interconnecté l'arduino avec le LDR (Connecté à trois cables, l'un sur 5v, et les 2 autres respectivent sur A0 et GNd des poarties Power et Analog), un LED (connecté à deux cables au port 10 et au GND) et compilé le code1.ino, nous avons remarqué au niveau du moniteur série intégré une succession de traces suivant que le LED soit allumé ou eteind.
La trace "Its DARK, Turn on the LED:" marque que le LED est allumé, et celle "Son BRIGHT, éteignez la LED:" marque que le LED est éteind.
Nous allons illustrer notre expérience avec les images et vidéos ci-dessous :
 
<img src=""/>
<P> <P/>
 <h5> figure4: Connection du LDR à l'Arduino <h5/>
 
 <h5>figure3: Trace de la valeur<h5/>
 
 <h4>2.4. Sketch en fritzing</h4>
 <img src=""/>
<P> <P/>
 <h5> figure5: Sketch en fritzing <h5/>
