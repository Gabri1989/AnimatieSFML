# Proiect-POO-v2
Notiuni introductive in [SFML] C++  - Legea atractiei gravitationale

	
Am ales sa dezvolt o demonstratie de grafica cu ajutorul bibliotecii multimedia SFML( Simple and Fast Multimedia Library).
 In primul rand am decis sa aleg aceasta biblioteca, deoarece doresc sa explorez si partea de grafica 2D, ceea ce imi permite sa aprofundez notiuni noi a limbajului C++. In al doilea rand am simtit nevoia sa trec de la programele cu afisare la consola simpla si sa realizez ceva mai practic, mai visual, care poate fi interactiv. Apoi am ales sa implementez aceste notiuni introductive de grafica 2D, pentru a face o mica aplicatie demonstrativa despre atractia corpurilor in spatiu, utilizand notiuni de fizica  si anume Legile lui Kepler si Newton.

 
CAPITOLUL I
1.	ELEMENTE  TEORETICE

1.1 Notiuni introductive in SFML
	
SFML (Simple and Fast Multimedia Library) este o biblioteca multimedia portabila si usor de folosit. Este scrisa în C++, dar poate fi și portata in C, D, Python, Ruby, OCaml, .NET. Este o alternativa orientata obiect pentru SDL si este folosit în mod principal pentru jocuri.
SFML pune la dispoziție grafică 2D accelerata prin hardware, folosind OpenGL, si cateva module pentru a usura programarea jocurilor si a aplicatiilor multimedia. SFML poate fi folosit si pentru furnizarea unei ferestre pentru OpenGL.
In continuare voi prezenta cateva aplicatii practice pentru dezvoltarea unor elemente grafice.
				Figura 1 – Patrat si Cerc

 

Pentru a crea o fereastra in care sa desenam obiectele dorite, vom utiliza  RenderWindow window(VideoMode(1920, 1024), "Nume fereastra"). Declararea unor entitati ca cerc sau patrat se face prin declararea clasei CircleShape si un nume de obiect cum ar fi “cerc”. Cu ajutorul acestui obiect noi creat, putem implementa diferite proprietati (setRadius(diametru cerc)).
Pentru adauga o imagine se va folosi clasa Texture si propritatea loadFromFile, iar ca parametrii vom introduce calea complete din calculator.

 

	Pentru a desena pe ecran forma dorita, se va utilize functia draw:
-	window.draw(nume_obiect);
 	Toate aceste elemente care vor fi afisate in fereastra grafica trebuie pozitionate in cadrul unei ramuri de tip while(window.isOpen()).


1.2  ABORDAREA TEORETICA A PROBLEMEI

   Voi prezenta cateva notiuni teoretice despre conceptului de lege gravitationala universala dintre doua corpuri. In astronomie, legile lui Kepler descriu mișcarile planetelor în jurul Soarelui (sau stelei sistemului solar respectiv) si in general comportamentul oricarui sistem de doua corpuri intre care actioneaza o forta invers proporționala cu patratul distantei. Aceste legi nu sunt valabile decat în cadrul mecanicii newtoniene. Newton a definit forta care actioneaza asupra unei planete ca produs al masei si acceleratiei. Astfel: 
1.	Fiecare planeta este atrasa de Soare.
2.	Forta care actioneaza asupra unei planete este direct proporționala cu masa planetei si este invers proporționala cu patratul distantei sale de Soare.
In general, pentru doua corpuri cosmice din Sistemul Solar, Newton afirma conform legii gravitatiei universale:
1.	Toate corpurile din Sistemul Solar se atrag.
2.	Forta dintre doua corpuri este direct proporționala cu produsul maselor lor si in proportie inversa cu patratul distantei dintre ele.
 
In ceea ce priveste aplicatia mea, voi utiliza o sursa de gravitatie ( planeta Pamant) care este fixa si un alt corp din spatiu care se va misca rectiliuniu in spatiu vectorial cu o anumita viteza, pana cand asupra ei se va exercita o forta si aceea va fi a Pamantului. In urma acestui fenomen fizic, corpul va atras de planeta noastra si ii va modifica viteza[creste] si traiectoria sa va devia, astfel ca vom obtine o traiectorie eliptica.


1.3 DESCRIEREA APLICATIEI

	
	In cadrul proiectului se va utiliza pentru modulul graphic librariile bibliotecii SFML. 
	Pentru a afla distanta dintre cele doua corpuri voi utiliza teorema lui Pitagora, dupa care se va utiliza formalizarea vectorilor .Distanta la patrat va fi egala cu distanta la patrat pe axa X dintre cele doua corpuri,  plus distanta la patrat pe axa Y dintre cele doua. Normalizarea vectorului distanat se face prin impartirea celor doua catete la ipotenuza. 

Mai departe se va aplica formulele pentru acceleratia satelitului sau a asteroidului pe axele X si Y , luand in considerare masa sursei de gravitatie si inversul patratului distantei. In cele din urma se va aplica accleratie asupra vitezei corpurilor care se deplaseaza si viteza pozitiei acestora.
	Pentru a evidentia mai bine forta de atractie a Pamantului asupra corpurilor din jur, am folosit 3 obiecte care se vor invarti in jurulul planetei cu diametre si distante diferite. Se va putea observa ca influenta este mai mare asupra corpurilor mai apropiate de Pamant si exista tendinta de accelerare a vitezei, cand acestea trec prin apropiearea lui.


2  ELEMENTE SPECIFICE POO 

In ceea ce priveste elementele specifice programarii pe obiecte, unul din principiile  de baza care vor fi folosite, este Incapsularea prin care se tin datele si functiile deparat de exterior. Vom avea clasa principala numita “Planeta” si doua clase derivate care vor mosteni clasa de baza, fiind denumite “Cometa” si “Asteroid”. O alta clasa implementata este clasa “Satelit”, care va interactiona cu clasa “Planeta” prin metoda [Interactiune]. Datele membre ale claselor au fost declarate private si initializate cu ajutorul constructorului cu parametrii. 
Metoda Interactiune foloseste transmiterea prin referinta a obiectului de tip Planeta , astfel ca toate modificarile realizate în apelul functiei asupra parametrilor formali se fac de fapt asupra parametrilor care vor modificati la iesirea din apel. In functia Main sunt declarate clasele si obiectele acestora, cu ajutorul carora vom apela metodele din clase. Tot aici sunt declarate obiecte diferite ale aceleasi clasa, pentru a schimba comportamentul unei functii.
	  
 


 
