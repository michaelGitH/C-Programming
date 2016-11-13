<html>
	<head>
		<title>
			Запрос данных из таблицы
		</title>
	</head>
	<body>
		<?php 
		//соединиться с сервером
	//mysql_connect("localhost" , "root", "") or die (mysql_error());
		$dbHost='localhost';
				$dbName='my_bd_mt';
				$dbUser='root';
				$dbPass='';
				
				$myConnect = mysql_connect($dbHost,$dbUser,$dbPass);
				mysql_select_db($dbName,$myConnect);
				mysql_set_charset('utf8'); 
		echo "Соединение с сервером";
		
		// Выбрать БД
		mysql_select_db("my_bd_mt") or die(mysql_error());
		
		echo "Выбор БД";
		
		// SQL-запрос
		$strSQL = "SELECT * FROM articles";
		
		echo $strSQL;
		
		// Выполнить запрос (набор данных $rs содержит результат)
		$rs = mysql_query($strSQL);
		
		// Цикл по recordset $rs
		// Каждый ряд становится массивом ($row) с помощью функции mysql_fetch_array
		while($row = mysql_fetch_array($rs)) {
			
			// Записать значение столбца FirstName (который является теперь массивом $row)
			echo $row['1'] . "<br/>";
		}
		
		// Закрыть соединение с БД
		mysql_close();
		?>
	</body>
</html>