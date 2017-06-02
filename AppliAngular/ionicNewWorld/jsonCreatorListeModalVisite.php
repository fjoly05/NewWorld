<?
function connexion ()
{
	//Déclaration des variables
	$serveur='localhost';
	$basededonnee='dbNewWorld2';
	$user='adminDbNewWorld2';
	$password='Pa$$w0rd';

	//Connexion à la base de données
	$connect = mysql_connect($serveur, $user, $password);

	//selection de la base
	$select = mysql_select_db($basededonnee, $connect);

	return $select;
}

connexion();

$requete1="set names utf8;";
$res1=mysql_query($requete1);

$requete= "
	select utilisateur.prenomU as prenom, utilisateur.nomU as nom, utilisateur.adresseU as adresse, utilisateur.villeU as ville, utilisateur.codePostalU as codePostal,
    visite.libelleVisite as libelle, visite.dateVisite as date,
    ControleProducteur.visiteConcluante as concluante, ControleProducteur.motifRejet as motifRejet, ControleProducteur.heureDebutControle as debut, ControleProducteur.heureFinControle as fin
    from visite                                                                                                                                                                                       
    inner join ControleProducteur on visite.idVisite = ControleProducteur.idVisite                                                                                                                    
    inner join utilisateur on ControleProducteur.idU = utilisateur.idU    
	where visite.controleur = ".$_GET["idControleur"]." ;                                                                                                                       
	";

//echo $requete
$result = mysql_query($requete);
//echo mysql_error();
while($donnees = mysql_fetch_assoc($result)){
    $res[] = $donnees;
}

//print-r($res);
echo json_encode($res);
?>