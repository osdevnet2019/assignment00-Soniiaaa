cat /mnt/c/Users/Sona/Documents/text_to_spell.txt | ./lowercase | fmt -1 |uniq | sort |sed 's/\.//g' | comm -13 /mnt/c/Users/Sona/Documents/dictionary.txt -

