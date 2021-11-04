<!DOCTYPE html>

<html lang="pt-br">
<meta charset="utf-8"/>
<head>
	<title>Form PHP</title>
	<style></style>
</head>

<body>
<div>
	<?php

	$nome2 = filter_input(INPUT_POST, "Nome", FILTER_SANITIZE_STRING);
	$nome = isset($_POST["Nome"])?$_POST["Nome"]:"Nome inválido";
	$email = isset($_POST["Email"])?$_POST["Email"]:"E-mail inválido";
	$func_name = isset($_POST["FuncName"])?$_POST["FuncName"]:0;
	
	echo "$nome <br/>";
	echo "$email <br/>";
	echo "$func_name <br/>";
	//echo date("d/m/Y h:i:s") . "<br/>";
	//echo "SHA1 => " . sha1($nome) . "<br/>";
	//echo "MD5 => " . md5($nome) . "<br/>";
	//echo "Base Encode => " . $Encode . "<br/>";
	//echo "Base Decode => " . $Decode . "<br/>";
	
	
	?>
	<a href="teste_HTML.html">Voltar</a>

</div>
</body>
</html>
