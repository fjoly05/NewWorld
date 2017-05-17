DROP TABLE if exists ouverture;
DROP TABLE if exists pdvChoisi;
DROP TABLE if exists consommateur;
DROP TABLE if exists pointDeVente;
DROP TABLE if exists producteur;
DROP TABLE if exists utilisateur;
DROP TABLE if exists jourSemaine;

CREATE  TABLE utilisateur (
id INT NOT NULL AUTO_INCREMENT ,
login VARCHAR(45) NOT NULL ,
prenom VARCHAR(45) NOT NULL ,
nom VARCHAR(45) NOT NULL ,
password VARCHAR(45) NOT NULL ,
codeP VARCHAR(5) NOT NULL ,
rue VARCHAR(45) NOT NULL ,
ville VARCHAR(45) NOT NULL ,
email VARCHAR(45) NOT NULL ,
telFixe VARCHAR(10) NULL ,
telPtb VARCHAR(10) NULL ,
questionSecrete VARCHAR(100) NOT NULL ,
reponseSecrete VARCHAR(45) NOT NULL ,
validation TINYINT(1) NOT NULL ,
PRIMARY KEY (id)
)
ENGINE = InnoDB;

create unique index idxlogin on utilisateur (login);
create unique index idxemail on utilisateur (email);

CREATE  TABLE consommateur (
id INT NOT NULL ,
PRIMARY KEY (id) ,
FOREIGN KEY (id )
REFERENCES utilisateur (id )
)
ENGINE = InnoDB;


CREATE  TABLE jourSemaine (
id INT NOT NULL ,
jour CHAR NOT NULL ,
PRIMARY KEY (id) 
)
ENGINE = InnoDB;


CREATE  TABLE pointDeVente (
id INT NOT NULL ,
nom VARCHAR(45) NOT NULL ,
IBAN VARCHAR(27) NOT NULL ,
SIRET INT(14) NOT NULL ,
PRIMARY KEY (id),
FOREIGN KEY (id )
REFERENCES utilisateur (id )
)
ENGINE = InnoDB;


CREATE  TABLE producteur (
id INT NOT NULL ,
SIRET INT(14) NOT NULL ,
IBAN VARCHAR(27) NOT NULL ,
PRIMARY KEY (id), 
FOREIGN KEY (id )
REFERENCES utilisateur (id )
)
ENGINE = InnoDB;

CREATE  TABLE pdvChoisi (
idPointVente INT NOT NULL ,
idConsommateur INT NOT NULL ,
PRIMARY KEY (idPointVente, idConsommateur) ,
FOREIGN KEY (idPointVente )
REFERENCES pointDeVente (id ),
FOREIGN KEY(idConsommateur )
REFERENCES consommateur (id )
)
ENGINE = InnoDB;

CREATE  TABLE ouverture (
idPointVente INT NOT NULL ,
idJour INT NOT NULL ,
ouverture VARCHAR(45) NOT NULL ,
fermeture VARCHAR(45) NOT NULL ,
PRIMARY KEY (idPointVente, idJour) ,
FOREIGN KEY (idPointVente )
REFERENCES pointDeVente (id ),
FOREIGN KEY (idJour )
REFERENCES jourSemaine (id )
)
ENGINE = InnoDB;

insert into utilisateur values (1,'Xx-D4rK-S4SuK3-xX','Frédéric','Joly','azer','05000','2c chemin des huppes','Gap','mail@mail.mail',0123456789,0612345678,'bonjour ?','bonjour',1);
insert into utilisateur values (2,'JeSuisNon','Julien','Kappler','menbalekouye','05000','une adresse au pif','Gap','mail2@mail.mail',0123456789,0612345678,'bonjour ?','bonjour',1);
insert into pointDeVente values (1,'Chez Fred','FR3456789012345678901234567',12345678901234);
insert into pointDeVente values (2,'Chez Julien','FR3456789012345558901234567',12345498951234);



