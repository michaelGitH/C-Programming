<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>������ 7</title>
	</head>
	<body>
		<?php
			define("PathFile", "site/pages/", TRUE) ;// ��������� ������ ���� � ����� �� ����������
			echo "<ul> \n"; // ������������� ������
			for ($a = 1; $a <= 5; ++$a)
			{ 		
				// ������� ������ � ������ �� �������� � ������� $a
				echo '<li><a href='.pathfile. 'page' . $a . '.html > ��������'. $a . "</a></li> \n"; 
			}	
			echo '</ul>';
		?>
	</body>
</html>