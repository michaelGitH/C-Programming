<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>Задача 10</title>
	</head>
	<body>
		<?php
			$rez = array (
			array('Товар','Цена', 'Количество'),
			array('Ковер','100', '3'),
			array('Фикус','20', '10'),
			array('Самолет','1000000', '1') 
			);

			echo "<table>";
			foreach ($rez as $rez_col){
					echo "<tr>";
					foreach ($rez_col as $sValue){
							echo "<td>{$sValue}</td>";
					}
					echo "</tr>";
			}
			echo "</table>";
		?>
	</body>
</html>