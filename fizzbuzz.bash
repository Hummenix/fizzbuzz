#!/bin/bash

x=0
while (($x <= 100))
do
	#check for fizz
	if (($x%3==0))
	then
		#check for buzz
		if (($x%5==0))
		then
			echo "FizzBuzz"
		else
			echo "Fizz"
		fi
	elif (($x%5==0))
	then
		echo "Buzz"
	else
		echo $x
	fi
	
	x=$((x+1))

done
