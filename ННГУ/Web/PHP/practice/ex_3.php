<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>������ 3</title>
	</head>
	<body>
		<div class="container">
			<?php
				$ddays = array('Monday' => '�����������','Tuesday' => '�������','Wednesday' => '�����',
					'Thursday' => '�������','Friday' => '�������','Saturday' => '�������','Sunday' => '�����������');
				echo "<h1>������ ����!</h1>"; 
				// ������� date("d.m.Y") ���������� ���������� � ������� ���� � ������� ��.��.����
				echo "<p> �������</p> <b>" . date("d.m.Y"). "</b>"; 
				// ������� date("l") ���������� ������� ���� ������
				echo "<p> ���� ������: <i>" . $ddays[date("l")] . "</i></p>";
			?>
		</div>
	</body>
</html>