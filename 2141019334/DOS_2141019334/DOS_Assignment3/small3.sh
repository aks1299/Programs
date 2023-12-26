read -p "Number 1 : " n1
read -p "Number 2 : " n2
read -p "Number 3 : " n3

if [ $n1 -lt $n2 ] && [ $n1 -lt $n3 ]; then
	echo "Smallest : $n1"
elif [ $n2 -lt $n1 ] && [ $n1 -lt $n3 ]; then
	echo "Smallest : $n2"
else
	echo "Smallest : $n3"
fi 

