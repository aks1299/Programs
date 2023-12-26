echo "The number you entered is : " $1
m=$1
sum=0
if [ "$1" -ge 10000 ] && [ "$1" -le 99999 ];then
	echo "It is a five digit number. "
	while [ "$m" -gt 0 ];
	do
	r=$(($m % 10))
	sum=$((sum+r))
	m=$((m/10))
	done
else
	echo "It is not a five digit number. "
fi
echo "The sum of digits is : "$sum
