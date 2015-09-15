echo "LED on:o, LED off:p, LED blink:b"
echo "input? (o/p/b)"
read input_key

screen -S arduino -X stuff $input_key
