<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>«адача 7</title>
	</head>
	<body>
		<?php
			define("PathFile", "site/pages/", TRUE) ;// константа хранит путь к папке со страницами
			echo "<ul> \n"; // маркированный список
			for ($a = 1; $a <= 5; ++$a)
			{ 		
				// Ёлемент списка и ссылка на страницу с номером $a
				echo '<li><a href='.pathfile. 'page' . $a . '.html > —траница'. $a . "</a></li> \n"; 
			}	
			echo '</ul>';
		?>
	</body>
</html>