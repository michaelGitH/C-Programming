<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>������ 2</title>
	</head>
	<body>
		<div class="container">
			<?php
				$P = 20; // �������� ���������
				$H = 5; // ������ ���������
				$W = 2; // ������ ������
				$L = 3; // ����� ������
				
				echo "<h1>����� ����������!</h1> <p> ����� �� ������ ������� ������ ���������� �������.</p>"; 
				echo "<h3> �������� ���������:</h3>"; 
				echo "<p> �������� ���������: $P �.</p>"; 
				echo "<p> ������ ���������: $H �.</p>"; 
				echo "<p> ������ ������: $W �.</p>";
				echo "<p> ����� ������: $L �.</p>";
				echo "<h3>  ���������� �������:</h3>"; 

				$count = (int)(($P/$W)*($H/$L)) + 1; // ���������� ���������� ������� ��� ������� ���������
				echo "<p> ��� ������� ��������� ����������: $count �������.</p>";

			?>
		</div>
	</body>
</html>

	