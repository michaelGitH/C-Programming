<html>
	<head>
		<meta http-equiv="content-type" content="text/html; charset=utf-8"/>
		<link rel="stylesheet" type="text/css" href="style.css" media="screen"/>
		<title>������ 10</title>
	</head>
	<body>
		<?php
			$rez = array (
			array('�����','����', '����������', '���������'),
			array('�����','100', '3'),
			array('�����','20', '10'),
			array('�������','1000000', '1') 
			);

			echo "<table>";
			$ssum = 0;
			foreach ($rez as $rez_col){
					echo "<tr>";
					$sum = $rez_col[1] * $rez_col[2];
					foreach ($rez_col as $sValue){
						echo "<td>{$sValue}</td>";
						//if($sValue != text)
						//	$sum *= $sValue;
					}
					if($rez_col != $rez[0])
						echo "<td>{$sum}</td>";
					$ssum += $sum;
					echo "</tr>";
			}
			echo "</table>";
			echo "<h4>�����: " .$ssum. "</4>";
		?>
	</body>
</html>