<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style1.css" media="screen"/>
		<title>Задача 6</title>
	</head>
	<body background="img\background<?php echo date("w"); ?>.jpg">
		<?php
			$ddays = array('Monday' => 'Понедельник','Tuesday' => 'Вторник','Wednesday' => 'Среда',
				'Thursday' => 'Четверг','Friday' => 'Пятница','Saturday' => 'Суббота','Sunday' => 'Воскресение');
			echo "<h3>Рисунок соответствующий дню недели: " . $ddays[date("l")] ."</h3>";
		?>
	</body>
</html>