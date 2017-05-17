<?php
function connexion ()
{
	//Déclaration des variables
	$serveur='localhost';
	$basededonnee='dbNewWorld';
	$user='adminDBNewWorld';
	$password='Pa$$w0rd';

	//Connexion à la base de données
	$connect = mysql_connect($serveur, $user, $password);

	//selection de la base
	$select = mysql_select_db($basededonnee, $connect);

	return $select;
}

function ptsDeVente ()
{
	//connexion
	connexion();
	
	//requete
	$result = mysql_query('select nom from pointDeVente;') or die ('Erreur SQL');

	return $result;
}

function ajoutConsommateur ($login, $lastName, $firstName, $street, $postalCode, $city, $phone, $cellphone, $email, $secretQ, $secretA)
{
	connexion();
    	// on écrit la requête sql
    	$sql = "insert into utilisateur values ('id?','$login','$firstName','$lastName','motdepasse','$postalCode','$street','$city','$email','0123456789','0623456789','bonjour ?','bonjour')";
}

?>

