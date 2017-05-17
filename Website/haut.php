<?
//include("traductionFR.php");
//include("traductionEN.php");
?>

<?php

session_start();
// Choix langue en fonction de l'appel de page
//unset($_SESSION['langue']);
//$_REQUEST['langue'] = "EN";
if (isset($_SESSION['langue']))
{
	if (isset($_REQUEST['langue']))
	{
		$langue = $_REQUEST['langue'];
	}else
	{
		$langue = $_SESSION['langue'];
	}
	if($langue == "EN" || $langue == "")
	{
		include('traductionEN.php');
		$_SESSION['langue'] = "EN";
	}
	else if ($langue == "FR")
	{
		include('traductionFR.php');
		$_SESSION['langue'] = "FR";
	}  
}else
{
	include('traductionFR.php');
	$_SESSION['langue'] = "FR";
}

?>

<!doctype html>
<html lang="fr">
	<head>
		<meta charset="utf-8">
		<link type='text/css' rel="stylesheet" href="style.css">
		<link href='http://fonts.googleapis.com/css?family=Great+Vibes' rel='stylesheet' type='text/css'>
		<link href='http://fonts.googleapis.com/css?family=Cedarville+Cursive' rel='stylesheet' type='text/css'>
		<title>New World</title>
	</head>
	<body>
		<div id='statut'> 
			<span>
                                
                <a href="<?echo basename($_SERVER['PHP_SELF']);?>?langue=EN" style="text-decoration:none;font-size:small" class="lien">&nbsp;&nbsp;| English</a>
				<a href="<?echo basename($_SERVER['PHP_SELF']);?>?langue=FR" style="text-decoration:none;font-size:small" class="lien">&nbsp;&nbsp;| Français</a>

				<a href="./inscriCo.php" style="text-decoration:none;font-size:small" class="lien">&nbsp;&nbsp;<?echo $connectionRegistration?></a>

			</span>
		</div>
		<div id='barreMenu'>
			<p>
				<a href="accueil.php" style="text-decoration:none" class="lien">NW</a>
				<a href="" style="text-decoration:none" class="lien"><?echo $buy?></a>
				<a href="" style="text-decoration:none" class="lien"><?echo $produce?></a>
				<a href="" style="text-decoration:none" class="lien"><?echo $deliver?></a>
				<input id="barreRecherche" type="text" placeHolder="<?echo $search?>"/>
			</p>
		</div>


