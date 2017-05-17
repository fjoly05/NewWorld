<?
// traitement du formulaire d'inscription

$type = $_POST["Type"];


//je rentre les données dans la table utilisateur
$login = $_POST["Login"];
$firstName = $_POST["FirstName"];
$lastName = $_POST["LastName"];
$street = $_POST["Rue"];
$postalCode = $_POST["CodePostal"];
$city = $_POST["Ville"];
$phone = $_POST["TelephoneFixe"];
$cellphone = $_POST["TelephonePtb"];
$mail = $_POST["Mail"];
$secretQ = $_POST["QuestionSecrete"];
$secretA = $_POST["ReponseSecrete"];



//si type==conso
if ($type == "Consommateur")
{
	//je recup 
	//je rentre l'id dans la table consommateur
	//je redirige sur une page genre on vous a envoyé un mail
}


//si type==prod
if ($type == "Producteur")
{
	//je recup login lastName firstName noIBAN noSIRET street postalCode city phone cellphone mail secretQ secretA
	//je rentre l'id + le reste des données dans la table producteur
	$noIBAN = $_POST["noIBAN"];
	$noSIRET = $_POST["noSIRET"];
	//je redirige sur une page genre on vous a envoyé un mail
}
//si type==pdv
if ($type == "PointDeVente")
{
	//je recup rebelote + posName
	$posName = $_POST["POSName"];
	//je blabla reste dans pointDeVente
	//je redirige
}
?>
