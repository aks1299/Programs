echo "Ramesh's Basic Salary is : " $1
dearanceAllowance=$(bc <<< "0.4 * $1")
rentAllowance=$(bc <<< "0.2 * $1")
grossSalary=$(bc <<< "$1 + $dearanceAllowance + $rentAllowance")
echo "Ramesh's Gross Salary is : " $grossSalary
