<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style1.css" media="screen"/>
		<title>������ 6</title>
	</head>
	<body background="img\background<?php echo date("w"); ?>.jpg">
		<?php
			$ddays = array('Monday' => '�����������','Tuesday' => '�������','Wednesday' => '�����',
				'Thursday' => '�������','Friday' => '�������','Saturday' => '�������','Sunday' => '�����������');
			echo "<h3>������� ��������������� ��� ������: " . $ddays[date("l")] ."</h3>";
		?>
	</body>
</html>