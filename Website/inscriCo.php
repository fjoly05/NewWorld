<?
include("haut.php");
include("requete.php");
?>
<script type="text/javascript">
function displayElem(id)
{
	if (id=="Consommateur")
	{
		document.getElementById("entreprise").style.display = "none";
		document.getElementById("choisirPDV").style.display = "block";
		document.getElementById("nomPDV").style.display = "none";
	}
	if (id=="Producteur")
	{
		document.getElementById("entreprise").style.display = "block";
		document.getElementById("choisirPDV").style.display = "none";
		document.getElementById("nomPDV").style.display = "none";
	}
	if (id=="PointDeVente")
	{
		document.getElementById("entreprise").style.display = "block";
		document.getElementById("choisirPDV").style.display = "none";
		document.getElementById("nomPDV").style.display = "block";
	}
}
	

/*si type == consommateur
demande de nom et prenom (récupération de l'id)

si type == pdv ou producteur
demande num IBAN et SIRET
*/
</script>

<div id="inscription">
	<form method="POST" action="traitement.php">
				<p>
					<label>* <?echo $inscriCo_login?></label>
					<input type="text" name="Login" id="login" placeHolder="Xx-D4RK-DUP0ND-xX">
				</p>
				<p>
					<label>* <?echo $inscriCo_type?></label>
					<input onClick="displayElem('Consommateur')" type='radio' name='Type' id='type' value="Consommateur"><?echo $inscriCo_consummer?>
					<input onClick="displayElem('Producteur')" type='radio' name='Type' id='type' value="Producteur"><?echo $inscriCo_producer?>
					<input onClick="displayElem('PointDeVente')" type='radio' name='Type' id='type' value="PointDeVente"><?echo $inscriCo_pointOfSale?>
				</p>
				<p id="nomPDV" style="display: none;">
					<label>* <?echo $inscriCo_POSName?></label>
					<input type="text" name="POSName" id="posName" placeHolder="chez Dupond">
				</p>
				<p>
					<label>* <?echo $inscriCo_lastName?></label>
					<input type="text" name="LastName" id="lastName" placeHolder="Dupond">
				</p>
				<p>
					<label>* <?echo $inscriCo_firstName?></label>
					<input type="text" name="FirstName" id="firstName" placeHolder="Jean">
				</p>
				<fieldset id="entreprise" style="display: none;">
					<legend></legend>
					<p>
						<label>* <?echo $inscriCo_IBAN?></label>
						<input type="text" name="noIBAN" id="IBAN" maxlength="27" placeHolder="FR012D45678I0FD345Q7890H2C4">
					</p>
					<p>
						<label>* <?echo $inscriCo_SIRET?></label>
						<input type="text" name="noSIRET" id="SIRET" maxlength="14" placeHolder="01234567890123">
					</p>
				</fieldset>
				<p>
					<label>* <?echo $inscriCo_streetAndNumber?></label>
					<input type="text" name="Rue" id="rue" placeHolder="194 faille de l'invocateur">
				</p>
				<p>
					<label>* <?echo $inscriCo_postalCode?></label>
					<input type="text" name="CodePostal" id="codePostal" placeHolder="12345" >
				</p>
				<p>
					<label>* <?echo $inscriCo_city?></label>

					<input type="text" name="Ville" id="ville" placeHolder="Paris" >
				</p>
				<fieldset id="choisirPDV" style="display: none;">
					<p>
						<?php
							$result = ptsDeVente();
							while($data = mysql_fetch_assoc($result)){
						?>
						<input name="pdv" type=checkbox value="pdv1"> <?php echo $data['nom']; } ?>
					</p>
				</fieldset>
				<p>
					<label><?echo $inscriCo_phone?></label>
					<input type="tel" name="TelephoneFixe" id="telephoneFixe" maxlength="10" placeHolder="0123456789">
				</p>
				<p>
					<label><?echo $inscriCo_cellphone?></label>
					<input type="tel" name="TelephonePtb" id="telehponePtb" maxlength="10" placeHolder="0678912345">
				</p>
				<p>
					<label>* <?echo $inscriCo_email?></label>
					<input type="email" name="Mail" id="mail" placeHolder="jeanDupond@example.com">
				</p>
				<p>
					<label>* <?echo $inscriCo_secretQuestion?></label>
					<select name="QuestionSecrete" id="questionSecrete">
           					<option value="q1"><?echo $inscriCo_question1?></option>
           					<option value="q2"><?echo $inscriCo_question2?></option>
           					<option value="q3"><?echo $inscriCo_question3?></option>
           					<option value="q4"><?echo $inscriCo_question4?></option>
           					<option value="q5"><?echo $inscriCo_question5?></option>
           					<option value="q6"><?echo $inscriCo_question6?></option>
           					<option value="q7"><?echo $inscriCo_question7?></option>
           					<option value="q8"><?echo $inscriCo_question8?></option>
       					</select>
					
				</p>
				<p>
					<label>* <?echo $inscriCo_secretAnswer?></label>
					<input type="text" name="ReponseSecrete" id="reponseSecrete" placeHolder="Oui" >
				</p>
			<p>
			<input type="submit" value="<?echo $inscriCo_validate?>" name="valider">
		</p>
	</form>
</div>
<?
include("bas.php");
?>





