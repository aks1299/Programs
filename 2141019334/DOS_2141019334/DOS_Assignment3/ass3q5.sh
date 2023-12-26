echo "The selling price is : "$sellingPrice
echo "The cost price is : "$costPrice
if ((sellingPrice > costPrice )); then
	profit=$((sellingPrice-costprice))
	echo "The seller has made a profit of $profit"
elif (( costPrice > sellingPrice ))
then
	loss=$((costPrice-sellingPrice))
	echo "The seller has a loss of $loss"
else
	echo "Nothing"
fi

