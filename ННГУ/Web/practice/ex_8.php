<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>������ 8</title>
	</head>
	<body>
		<?php
			define("PathFile", "pages/", True);
			echo "<ul> \n";
			$pages = array('� ���' =>  'about.html', '�������' =>  'main.html',
				'��������' =>  'contacts.html', ' �������� ' =>  ' downloads.html');
			foreach($pages as $key => $val)
			{
				// ������� ������ � ������ �� �������� � ������� $a
				echo '<li><a href='.$val.'>'.$key."</a></li> \n";
			}
			echo '</ul>';
		?>
	</body>
</html>