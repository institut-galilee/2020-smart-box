#include <SoftwareSerial.h>

String InfoSMS = "";  // STOCKAGE DE TOUTES LES INFOS DU SMS
String Message = "";  // STOCKAGE DU MESSAGE
String Numero = "";  // STOCKAGE DU NUMERO
String MonNum = "+33767745913"; // VOTRE NUMERO
bool SMS = 0;
bool NUM = 0;

SoftwareSerial GSMModule(6, 7); // RX, TX DE L'ARDUINO

void setup()
{
  Serial.begin(9600);  // OUVERTURE DU PORT DE SERIE AVEC L'ORDI

  GSMModule.begin(9600);
  delay(200);
  GSMModule.println("AT+CMGF=1");  // REGLER LE MODULE EN MODE TEXTE
  delay(200);
  GSMModule.println("AT+CNMI=2,2,0,0,0");  // POUR QUE LES MESSAGES QUI ARRIVENT SOIENT LUS DIRECTEMENT
  delay(200);
  Serial.println("Le module GSM est en attente de message");
}

void loop()
{
  NouveauSMS();  // ON VERIFIE L'ARRIVEE D'UN NOUVEAU MESSAGE

  if (SMS)  // S'IL Y A UN NOUVEAU MESSAGE
  {
    TestNumero();  // ON VERIFIE SI LE NUMERO DE L'EXPEDITEUR EST VALIDE
    SMS = 0;  // REMISE A ZERO

    if (NUM)  // SI LE NUMERO EST VALIDE
    {
      TestMessage();  // ON TESTE LA CORRESPONDANCE DU MESSAGE RECU
      NUM = 0;  // REMISE A ZERO
    }
  }

}

void NouveauSMS()
{
  if (GSMModule.available())
  {
    Serial.println("Un SMS est disponible");
    InfoSMS = GSMModule.readString();  // STOCKAGE DES INFOS DU SMS DANS LA VARIABLE "InfoSMS"
    Serial.println(InfoSMS);
    int DebutNumero = InfoSMS.indexOf('"');  // RECHERCHE DU PREMIER CARACTERE '"' POUR DETERMINER LE DEBUT DU NUMERO DE TELEPHONE
    int FinNumero = InfoSMS.indexOf('"', DebutNumero + 1);  // RECHERCHE DU SECOND CARACTERE '"' A PARTIR DE "DebutNumero" POUR DETERMINER LA FIN DU NUMERO DE TELEPHONE
    Numero = InfoSMS.substring(DebutNumero + 1, FinNumero);  // EXTRACTION DU NUMERO DE TELEPHONE DANS LA VARIABLE "Numero" SITUE ENTRE LES DEUX '"'
    int DebutMessage = InfoSMS.lastIndexOf('"');  // RECHERCHE DU DERNIER CARACTERE '"'
    Message = InfoSMS.substring(DebutMessage + 1, InfoSMS.length() - 1);  // EXTRACTION DU SMS DANS "Message"
    Message = Message.substring(Message.indexOf('\n') + 1, Message.length() - 1);  // ON RETIRE LES CARACTERES SUPERFLUS NE FAISANT PAS PARTIS DU MESSAGE
    Serial.print("DE : ");
    Serial.println(Numero);
    Serial.print("Le message est : ");
    Serial.println(Message);
    SMS = 1;
  }
}

void TestNumero()
{
  if (Numero.equals(MonNum))
  {
    Serial.println("Le numéro est valide");
    NUM = 1;
  }
}

void TestMessage()
{
  // POUR UNE SEULE PORTE (PORTAIL) :
  if (Message.equals("FauxContact"))
  {
    Serial.println("Le programme est fini");
  }
  }
