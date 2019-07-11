<?php
	echo "Hello World!";
	$start = 0;
	$end   = 100;
	while ($start <= $end) {
		#Check for Fizz
		if ($start%3==0) {
			#Buzz
			if ($start%5==0) {
				echo "FizzBuzz\n";
			}
			else {
				echo "Fizz\n";
			}
		}
		else {
			#Buzz
			if ($start%5==0) {
				echo "Buzz \n";
			}
			else {
				echo "$start \n";
			}
		}
		$start = $start + 1;
	}
?>
