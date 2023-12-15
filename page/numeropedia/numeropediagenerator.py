#numeropedia generator
import os, random

numbers = {
0: "we start there",
10: "first two digit number",
19: "I dunno",
867: "very specific",
54: "number of bodies in the basement<br><br><br>hold up",
1000: "wow so far yet we can still go further",
1001: "we are further now",
911: "call an ambulance!",
405: "yes I know very funny",
1326: "you might ask why this one has a special text<br>well I'm not telling you",
261: "1326",
608: "retreat to.. area 261! Weak signa.. The.. go t..."
}

for n in range(1500):
    if n == 404: pass
    else:
        if n in numbers:
            text = numbers[n]
        else:
            text = random.choice(["It's a cool number", "sup", "still there?", "None", "It's cool but not as cool as the next one"])
        with open(f"{n}.html", "w") as f:
            f.write("""<!DOCTYPE html 
            PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
            "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">""")
            f.write("\n")
            f.write(f'<html xmlns="https://www.w3.org/1999/xhtml"><head><link rel="stylesheet" href=../style.css><title>Numeropedia</title></head><body><div class=maintitle><br><b>{n}</b><br> &nbsp </div><br><div class=linkstyle> &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp <a href={n-1}.html>PREVIOUS</a></div><div class=linkstyle> &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp <a href={n+1}.html>NEXT</a></div><br>{text}<br><br><div class=linkstyle> &nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp <a href=index.html>GO BACK</a></div></body></html>')
    print(n)
            