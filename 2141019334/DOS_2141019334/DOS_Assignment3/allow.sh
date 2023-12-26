read -p "Marks : " internal
read -p "Attendance : " attendance
if [ $internal -ge 20 ] && [ $attendance -ge 75 ]; 
then
	echo "Allowed"
else
	echo "Not Allowed"
fi
