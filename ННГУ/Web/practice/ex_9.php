<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>Задача 9</title>
	</head>
	<body>
		<?php
			echo "<table><tr>";
			for ($i = 1; $i <= 9; $i++) 
			{      
				for ($j = 1; $j <= 9; $j++)
					if ($i == 1 && $j==1)
						echo "<td></td>";
					else
						echo "<td>".($i*$j)."</td>";         
					if ($i != 9) echo "</tr><tr>";  
			};   
			echo "</tr></table>";
		?>
	</body>
</html>