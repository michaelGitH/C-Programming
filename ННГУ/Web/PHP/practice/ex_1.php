<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>������ 1</title>
	</head>
	<body>
		<div class="container">
			<?php
				$L = 15; // ����� ���������
				$D = 7; // ������ ���������
				$W = 135; // �������� ������ ��������� (����)
				echo "<h1>����� ����������!</h1> <p> ����� �� ������ ������� ������ ���������� ���������.</p>"; 
				echo "<h3> �������� ���������:</h3>"; 
				echo "<p> ����� ���������: $L �.</p>"; 
				echo "<p> ������ ���������: $D �.</p>"; 
				echo "<p> �������� ����� ������: $W ��.</p>";
				echo "<h3>  ���������� �������:</h3>"; 
				echo "<p> ������������ �������: ". $L*$D ." ��.�.</p>"; 

				$count = (int)($L*$D*100/$W) + 1; // ���������� ���������� ������ ������ �� ����� 100 ���� �� ���� ��. ����
				echo "<p> ��� ������� ��������� ����������: $count ������.</p>";

			?>
		</div>
	</body>
</html>
