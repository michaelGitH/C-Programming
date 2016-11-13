<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>Задача 8</title>
	</head>
	<body>
		<?php
			define("PathFile", "pages/", True);
			echo "<ul> \n";
			$pages = array('О нас' =>  'about.html', 'Главная' =>  'main.html',
				'Контакты' =>  'contacts.html', ' Загрузки ' =>  ' downloads.html');
			foreach($pages as $key => $val)
			{
				// Элемент списка и ссылка на страницу с номером $a
				echo '<li><a href='.$val.'>'.$key."</a></li> \n";
			}
			echo '</ul>';
		?>
	</body>
</html>