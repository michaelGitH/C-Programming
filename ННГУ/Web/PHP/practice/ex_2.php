<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>Задача 2</title>
	</head>
	<body>
		<div class="container">
			<?php
				$P = 20; // Периметр помещения
				$H = 5; // высота помещения
				$W = 2; // Ширина рулона
				$L = 3; // Длина рулона
				
				echo "<h1>Добро пожаловать!</h1> <p> Здесь вы можете сделать расчет количества рулонов.</p>"; 
				echo "<h3> Заданные параметры:</h3>"; 
				echo "<p> Периметр помещения: $P м.</p>"; 
				echo "<p> Высота помещения: $H м.</p>"; 
				echo "<p> Ширина рулона: $W м.</p>";
				echo "<p> Длина рулона: $L м.</p>";
				echo "<h3>  Результаты расчета:</h3>"; 

				$count = (int)(($P/$W)*($H/$L)) + 1; // Вычисление количества рулонов для оклейки помещения
				echo "<p> Для данного помещения необходимо: $count рулонов.</p>";

			?>
		</div>
	</body>
</html>

	