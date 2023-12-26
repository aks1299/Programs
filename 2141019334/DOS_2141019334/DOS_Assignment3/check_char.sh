read -p "Enter Character : " char

if [[ -z "$char" ]];then
	echo "no char"
elif [[ ${char} -gt 1 ]];then
	echo "you have entered one character"
elif [[ "$char" =~ [a-z] ]];then
	echo "you have entered alphabet"
elif [[ "$char" =~ [A-Z] ]];then
	echo "you have entered uppercase"
elif [[ "$char" =~ [0-9] ]];then
	echo "you have entered digit"
else 
	echo "Special"
fi
