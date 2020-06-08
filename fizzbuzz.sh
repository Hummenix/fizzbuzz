#!/bin/sh

###############################
#######NOT MINE BUT NICE#######
########POSIX compliant########
###############################

start=1
end=100

fizz=3
buzz=5

count=$start
while [ $count -le $end ]
do
    number=true
    [ $(( (count-1)/fizz )) -lt $(( count/fizz )) ] && printf "Fizz" && number=false
    [ $(( (count-1)/buzz )) -lt $(( count/buzz )) ] && printf "Buzz" && number=false
    $number && printf "$count"
    printf "\n"
    count=$((count+1))
done
