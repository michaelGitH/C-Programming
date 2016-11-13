<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>Задача 3</title>
	</head>
	<body>
		<div class="container">
			<?php
				$ddays = array('Monday' => 'Понедельник','Tuesday' => 'Вторник','Wednesday' => 'Среда',
					'Thursday' => 'Четверг','Friday' => 'Пятница','Saturday' => 'Суббота','Sunday' => 'Воскресение');
				echo "<h1>Добрый день!</h1>"; 
				// функция date("d.m.Y") возвращает информацию о текущей дате в формате ДД.ММ.ГГГГ
				echo "<p> Сегодня</p> <b>" . date("d.m.Y"). "</b>"; 
				// функция date("l") возвращает текущий день недели
				echo "<p> День недели: <i>" . $ddays[date("l")] . "</i></p>";
			?>
		</div>
	</body>
</html>