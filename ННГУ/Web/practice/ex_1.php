<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>Задача 1</title>
	</head>
	<body>
		<div class="container">
			<?php
				$L = 15; // длина помещения
				$D = 7; // Ширина помещения
				$W = 135; // Мощность секции радиатора (Ватт)
				echo "<h1>Добро пожаловать!</h1> <p> Здесь вы можете сделать расчет радиаторов отопления.</p>"; 
				echo "<h3> Заданные параметры:</h3>"; 
				echo "<p> Длина помещения: $L м.</p>"; 
				echo "<p> Ширина помещения: $D м.</p>"; 
				echo "<p> Мощность одной секции: $W вт.</p>";
				echo "<h3>  Результаты расчета:</h3>"; 
				echo "<p> Отапливаемая площадь: ". $L*$D ." кв.м.</p>"; 

				$count = (int)($L*$D*100/$W) + 1; // Вычисление количества секций исходя из нормы 100 ватт на один кв. метр
				echo "<p> Для данного помещения необходимо: $count секций.</p>";

			?>
		</div>
	</body>
</html>
