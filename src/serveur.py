"""
* Code de récuperation des données sur le port
* et insertion dans la base de données
"""
from serial import Serial
import mysql.connector as MS
from mysql.connector import Error
from mysql.connector import errorcode

"""
* Fonction d'insertion des données
"""
def insererDonnees(d1,d2,d3,d4,d5):
    try:
        connexion = MS.connect(host='localhost',database='iot',user='root',password='')
        curseur = connexion.cursor()

        requete_insertion = """INSERT INTO data (humidite,temperature,lat,lon,photo) VALUES (%s, %s, %s,%s,%s) """
        
        enregistrement = (d1,d2,d3,d4,d5)
        curseur.execute(requete_insertion, enregistrement)
        connexion.commit()
        print("Ligne insérée avec succès dans la table")
    
    except MS.Error as error:
        print("Echec d'insertion de la ligne dans la table {}".format(error))

    finally:
        if (connexion.is_connected()):
            curseur.close()
            connexion.close()

#Ouverture du port COM3
            
ser = Serial('/COM3',9600)

#Lecture des et enregistrement des données

while True:
    data = ser.readline() #chaine de caractère comprenant les caractère \n et \r
    data1 = data.decode('utf-8');
    tab = data1.split(';')
    lat = tab[0];
    lon = tab[1];
    humidite = data[2];
    temperature = data[3];
    insererDonnees(humidite,temperature,lat,lon,"etat.jpg");
       

